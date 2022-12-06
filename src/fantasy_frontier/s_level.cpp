#include "s_level.hpp"

XLELib::FF::S_LevelError::S_LevelError(std::string msg) {
	error = "[XLELib FF S_LevelError] " + msg;
}

const char* XLELib::FF::S_LevelError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Level::S_Level() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Level::S_Level(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Level::~S_Level() {
	
}

void XLELib::FF::S_Level::init_conversion() {
	class_pointer = this;
	conversions = {};
}
