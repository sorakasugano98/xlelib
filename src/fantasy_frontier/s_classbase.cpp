#include "s_classbase.hpp"

XLELib::FF::S_ClassBaseError::S_ClassBaseError(std::string msg) {
	error = "[XLELib FF S_ClassBaseError] " + msg;
}

const char* XLELib::FF::S_ClassBaseError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_ClassBase::S_ClassBase() : Conversion() {
	init_conversion();
}

XLELib::FF::S_ClassBase::S_ClassBase(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_ClassBase::~S_ClassBase() {
	
}

void XLELib::FF::S_ClassBase::init_conversion() {
	class_pointer = this;
	conversions = {};
}
