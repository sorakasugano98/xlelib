#include "s_textlimit.hpp"

XLELib::FF::S_TextLimitError::S_TextLimitError(std::string msg) {
	error = "[XLELib FF S_TextLimitError] " + msg;
}

const char* XLELib::FF::S_TextLimitError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_TextLimit::S_TextLimit() : Conversion() {
	init_conversion();
}

XLELib::FF::S_TextLimit::S_TextLimit(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_TextLimit::~S_TextLimit() {
	
}

void XLELib::FF::S_TextLimit::init_conversion() {
	class_pointer = this;
	conversions = {};
}
