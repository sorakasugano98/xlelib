#include "s_class.hpp"

XLELib::FF::S_ClassError::S_ClassError(std::string msg) {
	error = "[XLELib FF S_ClassError] " + msg;
}

const char* XLELib::FF::S_ClassError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Class::S_Class() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Class::S_Class(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Class::~S_Class() {
	
}

void XLELib::FF::S_Class::init_conversion() {
	class_pointer = this;
	conversions = {};
}
