#include "s_hunter.hpp"

XLELib::FF::S_HunterError::S_HunterError(std::string msg) {
	error = "[XLELib FF S_HunterError] " + msg;
}

const char* XLELib::FF::S_HunterError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Hunter::S_Hunter() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Hunter::S_Hunter(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Hunter::~S_Hunter() {
	
}

void XLELib::FF::S_Hunter::init_conversion() {
	class_pointer = this;
	conversions = {};
}
