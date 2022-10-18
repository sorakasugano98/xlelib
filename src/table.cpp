#include "table.hpp"

XLELib::TableError::TableError(std::string msg) : error(msg) {
	
}

const char* XLELib::TableError::what() const throw() {
	std::string ret = "[XLELib TableError] " + error;
	return ret.c_str();
}

XLELib::Table::Table() {
	
}

XLELib::Table::Table(std::string input_file) {
	
}

XLELib::Table::~Table() {
	
}

std::vector<std::wstring>& XLELib::Table::Data::operator[](unsigned long long index) {
	
}

std::vector<std::wstring>& XLELib::Table::Data::operator[](std::wstring index) {
	return operator[](std::stoull(index));
}

std::vector<std::wstring>& XLELib::Table::Data::operator[](std::string index) {
	return operator[](std::stoull(index));
}

std::vector<std::wstring>& XLELib::Table::Data::at(unsigned long long index) {
	return operator[](index);
}

std::vector<std::wstring>& XLELib::Table::Data::at(std::wstring index) {
	return operator[](index);
}

std::vector<std::wstring>& XLELib::Table::Data::at(std::string index) {
	return operator[](index);
}
