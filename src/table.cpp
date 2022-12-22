#include "table.hpp"

XLELib::TableError::TableError(std::string msg) {
	error = "[XLELib TableError] " + msg;
}

const char* XLELib::TableError::what() const throw() {
	return error.c_str();
}

XLELib::Table::Table() {
	/* Default locale is tw. */
	set_table_locale("tw");
}

XLELib::Table::Table(std::string input_file) {
	/* Default locale is tw. */
	set_table_locale("tw");
	/* Read the table from file. */
	read(input_file);
}

XLELib::Table::~Table() {
	
}

void XLELib::Table::read(std::string file_name) {
	#ifdef _WIN32
		setlocale(LC_ALL, locale.c_str());
	#endif
	std::wifstream file(file_name);
	#ifndef _WIN32
		file.imbue(std::locale(locale));
	#endif
	if(!file) {
		throw TableError("Unable to open input file \"" + file_name + "\".");
	}
	std::wstring line = L"";
	FileType file_type = FileType::UNKNOWN;
	std::getline(file, line);
	unsigned long long delimiter_counter = 0;
	try {
		if(line[0] == L'|') {
			file_type = FileType::PIPE_DELIMITED;
			std::wstring column_amount = L"";
			for(unsigned long long i = 0; i < line.size(); i++) {
				if(line[i] == L'|') {
					delimiter_counter++;
				} else {
					if(delimiter_counter == 1) {
						version += line[i];
					} else if(delimiter_counter == 2) {
						column_amount += line[i];
					}
				}
			}
			length = std::stoull(column_amount);
			delimiter_counter = 0;
		} else if(line[0] == 'V' && line[1] == '.' && line[line.size() - 1] == L',') {
			file_type = FileType::COMMA_DELIMITED;
			std::wstring column_amount = L"";
			for(unsigned long long i = 0; i < line.size(); i++) {
				if(line[i] == L',') {
					delimiter_counter++;
				} else {
					if(delimiter_counter == 0) {
						version += line[i];
					} else if(delimiter_counter == 1) {
						column_amount += line[i];
					}
				}
			}
			length = std::stoull(column_amount);
			delimiter_counter = 0;
		} else {
			file_type = FileType::NONE;
		}
	} catch(...) {
		file.close();
		throw TableError("Could not read header of file " + file_name + ".");
	}
	try {
		if(file_type == FileType::NONE) {
			do {
				version = L"V.1";
				bool has_id = false;
				unsigned long long new_entry_id;
				std::vector<std::wstring> new_entry_data;
				std::wstring field = L"";
				for(unsigned long long i = 0; i < line.size(); i++) {
					if(line[i] == L',') {
						if(!has_id) {
							new_entry_id = std::stoull(field);
							field = L"";
							has_id = true;
						} else {
							new_entry_data.push_back(field);
							field = L"";
						}
					} else {
						field += line[i];
					}
				}
				new_entry_data.push_back(field);
				content.insert(std::make_pair(new_entry_id, new_entry_data));
			} while(std::getline(file,line));
			length = content.begin()->second.size() + 1;
			file.close();
			return;
		}
	} catch(...) {
		throw TableError("Could not read data of file " + file_name + " with header type NONE.");
	}
	try{
		std::vector<std::wstring> new_entry;
		new_entry.push_back(L"");
		while(std::getline(file, line)) {
			if(delimiter_counter == length) {
				for(unsigned long long i = 0; i < new_entry[0].size(); i++) {
					if(new_entry[0][i] == L'\r' || new_entry[0][i] == L'\n') {
						new_entry[0].erase(new_entry[0].begin() + i);
						i--;
					}
				}
				delimiter_counter = 0;
				unsigned long long new_entry_id = std::stoull(new_entry[0]);
				new_entry.erase(new_entry.begin());
				content.insert(std::make_pair(new_entry_id, new_entry));
				new_entry.clear();
				new_entry.push_back(L"");
			}
			for(unsigned long long i = 0; i < line.size(); i++) {
				if(file_type == FileType::PIPE_DELIMITED && line[i] == L'|' ||
				   file_type == FileType::COMMA_DELIMITED && line[i] == L',') {
					delimiter_counter++;
					new_entry.push_back(L"");
				} else {
					new_entry[new_entry.size() - 1] += line[i];
				}
			}
			if(delimiter_counter < length && new_entry.size() > 1) {
				new_entry[new_entry.size() - 1] += L'\n';
			}
		}
		if(delimiter_counter == length) {
			unsigned long long new_entry_id = std::stoull(new_entry[0]);
			new_entry.erase(new_entry.begin());
			content.insert(std::make_pair(new_entry_id, new_entry));
		}
		file.close();
	} catch(...) {
		throw TableError("Could not read data of file " + file_name + ".");
	}
}

void XLELib::Table::write(std::string file_name, FileType file_type, bool reverse) {
	try {
		#ifdef _WIN32
			setlocale(LC_ALL, locale.c_str());
		#endif
		std::wofstream file(file_name);
		#ifndef _WIN32
			file.imbue(std::locale(locale));
		#endif
		switch(file_type) {
			case FileType::COMMA_DELIMITED:
				file << version << L"," << std::to_wstring(length) << L"," << std::endl;
				break;
			case FileType::PIPE_DELIMITED:
				file << L"|" << version << L"|" << std::to_wstring(length) << L"|" << std::endl;
		}
		for(std::map<unsigned long long, std::vector<std::wstring>>::iterator i = (reverse ? content.end() : content.begin()); i != (reverse ? content.begin() : content.end()); i++) {
			file << std::to_wstring(i->first);
			if(file_type == FileType::PIPE_DELIMITED) {
				file << L"|";
			} else {
				file << L",";
			}
			for(unsigned long long j = 0; j < length - 1; j++) {
				file << i->second[j];
				if(file_type == FileType::PIPE_DELIMITED) {
					file << L"|";
				} else if(file_type != FileType::NONE || j != length - 2) {
					file << L",";
				}
			}
			file << std::endl;
		}
		file.close();
	} catch(...) {
		throw TableError("Could not write table to file " + file_name + ".");
	}
}

void XLELib::Table::clean() {
	for(std::map<unsigned long long, std::vector<std::wstring>>::iterator i = content.begin(); i != content.end(); i++) {
		bool empty = true;
		for(unsigned long long j = 0; j < length; j++) {
			if(i->second[j] != L"") {
				empty = false;
				break;
			}
		}
		if(empty) {
			std::map<unsigned long long, std::vector<std::wstring>>::iterator k = i;
			k++;
			content.erase(i);
			k--;
			i = k;
		}
	}
}

void XLELib::Table::set_table_locale(std::string loc) {
	if(loc == "de") {
		#ifdef _WIN32
			locale = "german-de";
		#else
			locale = "de_DE.UTF-8";
		#endif
		return;
	}
	if(loc == "tw") {
		#ifdef _WIN32
			locale = "chinese-traditional";
		#else
			locale = "zh_TW.Big5";
		#endif
		return;
	}
	if(loc == "us") {
		#ifdef _WIN32
			locale = "english-us";
		#else
			locale = "en_US.UTF-8";
		#endif
		return;
	}
	throw TableError("Set locale failed, unknown locale for table.");
}

void XLELib::Table::resize_at_end(std::wstring new_version, unsigned long long new_length) {
	if(new_length == length) {
		throw TableError("Resizing failed, current and target column amount is the same.");
	}
	if(new_length > length) {
		unsigned long long columns_to_add = new_length - length;
		for(std::map<unsigned long long, std::vector<std::wstring>>::iterator i = content.begin(); i != content.end(); i++) {
			for(unsigned long long j = 0; j < columns_to_add; j++) {
				i->second.push_back(L"");
			}
		}
	} else {
		unsigned long long columns_to_remove = length - new_length;
		for(std::map<unsigned long long, std::vector<std::wstring>>::iterator i = content.begin(); i != content.end(); i++) {
			i->second.resize(i->second.size() - columns_to_remove);
		}
	}
	version = new_version;
	length = new_length;
}
