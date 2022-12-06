#include "s_eudemoncollect.hpp"

XLELib::FF::S_EudemonCollectError::S_EudemonCollectError(std::string msg) {
	error = "[XLELib FF S_EudemonCollectError] " + msg;
}

const char* XLELib::FF::S_EudemonCollectError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonCollect::S_EudemonCollect() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonCollect::S_EudemonCollect(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonCollect::~S_EudemonCollect() {
	
}

void XLELib::FF::S_EudemonCollect::init_conversion() {
	class_pointer = this;
	conversions = {};
}
