#include "s_biology.hpp"

XLELib::FF::S_BiologyError::S_BiologyError(std::string msg) {
	error = "[XLELib FF S_BiologyError] " + msg;
}

const char* XLELib::FF::S_BiologyError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Biology::S_Biology() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Biology::S_Biology(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Biology::~S_Biology() {
	
}

void XLELib::FF::S_Biology::init_conversion() {
	class_pointer = this;
	conversions = {};
}
