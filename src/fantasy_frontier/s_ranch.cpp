#include "s_ranch.hpp"

XLELib::FF::S_RanchError::S_RanchError(std::string msg) {
	error = "[XLELib FF S_RanchError] " + msg;
}

const char* XLELib::FF::S_RanchError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Ranch::S_Ranch() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Ranch::S_Ranch(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Ranch::~S_Ranch() {
	
}

void XLELib::FF::S_Ranch::init_conversion() {
	class_pointer = this;
	conversions = {};
}
