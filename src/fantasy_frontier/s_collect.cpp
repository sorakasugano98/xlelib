#include "s_collect.hpp"

XLELib::FF::S_CollectError::S_CollectError(std::string msg) {
	error = "[XLELib FF S_CollectError] " + msg;
}

const char* XLELib::FF::S_CollectError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Collect::S_Collect() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Collect::S_Collect(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Collect::~S_Collect() {
	
}

void XLELib::FF::S_Collect::init_conversion() {
	class_pointer = this;
	conversions = {};
}
