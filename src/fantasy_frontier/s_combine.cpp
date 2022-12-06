#include "s_combine.hpp"

XLELib::FF::S_CombineError::S_CombineError(std::string msg) {
	error = "[XLELib FF S_CombineError] " + msg;
}

const char* XLELib::FF::S_CombineError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Combine::S_Combine() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Combine::S_Combine(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Combine::~S_Combine() {
	
}

void XLELib::FF::S_Combine::init_conversion() {
	class_pointer = this;
	conversions = {};
}
