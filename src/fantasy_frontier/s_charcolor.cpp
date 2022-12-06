#include "s_charcolor.hpp"

XLELib::FF::S_CharColorError::S_CharColorError(std::string msg) {
	error = "[XLELib FF S_CharColorError] " + msg;
}

const char* XLELib::FF::S_CharColorError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CharColor::S_CharColor() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CharColor::S_CharColor(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CharColor::~S_CharColor() {
	
}

void XLELib::FF::S_CharColor::init_conversion() {
	class_pointer = this;
	conversions = {};
}
