#include "s_divination.hpp"

XLELib::FF::S_DivinationError::S_DivinationError(std::string msg) {
	error = "[XLELib FF S_DivinationError] " + msg;
}

const char* XLELib::FF::S_DivinationError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Divination::S_Divination() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Divination::S_Divination(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Divination::~S_Divination() {
	
}

void XLELib::FF::S_Divination::init_conversion() {
	class_pointer = this;
	conversions = {};
}
