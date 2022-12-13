#include "ttable.hpp"

XLELib::TTableError::TTableError(std::string msg) {
	error = "[XLELib TTableError] " + msg;
}

const char* XLELib::TTableError::what() const throw() {
	return error.c_str();
}

XLELib::TTable::TTable() {
	/* Default locale is tw. */
	set_table_locale("tw");
}

XLELib::TTable::TTable(std::string input_file) {
	/* Default locale is tw. */
	set_table_locale("tw");
	/* Read the table from file. */
	read(input_file);
}

XLELib::TTable::~TTable() {
	
}

void XLELib::TTable::read(std::string file_name) {
	#ifdef _WIN32
		setlocale(LC_ALL, locale.c_str());
	#endif
	std::wifstream file(file_name);
	#ifndef _WIN32
		file.imbue(std::locale(locale));
	#endif
	if(!file) {
		throw TTableError("Unable to open input file \"" + file_name + "\".");
	}
	unsigned long long delimiter_counter = 0;
	std::wstring line = L"";
	std::getline(file, line);
	try {
		line.pop_back();
		length = std::stoull(line);
		std::getline(file, line);
		std::wstring translated_column_id = L"";
		for(unsigned long long i = 0; i < line.size(); i++) {
			if(line[i] == L'|') {
				delimiter_counter++;
				if(delimiter_counter != 1) {
					translated_columns.push_back(std::stoull(translated_column_id));
					translated_column_id = L"";
				}
			} else {
				if(delimiter_counter == 0) {
					version += line[i];
				} else  {
					translated_column_id += line[i];
				}
			}
		}
	} catch(...) {
		throw TTableError("Could not parse header of translation file " + file_name + ".");
	}
	try{
		std::vector<std::wstring> new_entry;
		new_entry.push_back(L"");
		delimiter_counter = 0;
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
				if(line[i] == L'|') {
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
		unsigned long long new_entry_id = std::stoull(new_entry[0]);
		new_entry.erase(new_entry.begin());
		content.insert(std::make_pair(new_entry_id, new_entry));
		file.close();
	} catch(...) {
		throw TTableError("Could not read data of translation file " + file_name + ".");
	}
}

void XLELib::TTable::write(std::string file_name) {
	try {
		#ifdef _WIN32
			setlocale(LC_ALL, locale.c_str());
		#endif
		std::wofstream file(file_name);
		#ifndef _WIN32
			file.imbue(std::locale(locale));
		#endif
		
		for(std::map<unsigned long long, std::vector<std::wstring>>::iterator i = content.begin(); i != content.end(); i++) {
			file << std::to_wstring(i->first) << L"|";
			for(unsigned long long j = 0; j < length - 1; j++) {
				file << i->second[j] << L"|";
			}
			file << std::endl;
		}
		file.close();
	} catch(...) {
		throw TTableError("Could not write translate table to file " + file_name + ".");
	}
}

void XLELib::TTable::clean() {
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

void XLELib::TTable::set_table_locale(std::string loc) {
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
	throw TTableError("Set locale failed, unknown locale for table.");
}
