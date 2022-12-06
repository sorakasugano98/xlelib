#include "s_classes.hpp"

XLELib::FF::S_ClassesError::S_ClassesError(std::string msg) {
	error = "[XLELib FF S_ClassesError] " + msg;
}

const char* XLELib::FF::S_ClassesError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Classes::S_Classes() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Classes::S_Classes(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Classes::~S_Classes() {
	
}

void XLELib::FF::S_Classes::init_conversion() {
	class_pointer = this;
	conversions = {};
}
