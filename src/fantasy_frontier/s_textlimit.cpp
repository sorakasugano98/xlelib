#include "s_textlimit.hpp"

XLELib::FF::S_TextLimitError::S_TextLimitError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_TextLimitError::what() const throw() {
	std::string ret = "[XLELib FF S_TextLimitError] " + error;
	return ret.c_str();
}

XLELib::FF::S_TextLimit::S_TextLimit() : Table() {
	
}

XLELib::FF::S_TextLimit::S_TextLimit(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_TextLimit::~S_TextLimit() {
	
}

