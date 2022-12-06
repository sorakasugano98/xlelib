#include "s_wizzard.hpp"

XLELib::FF::S_WizzardError::S_WizzardError(std::string msg) {
	error = "[XLELib FF S_WizzardError] " + msg;
}

const char* XLELib::FF::S_WizzardError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Wizzard::S_Wizzard() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Wizzard::S_Wizzard(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Wizzard::~S_Wizzard() {
	
}

void XLELib::FF::S_Wizzard::init_conversion() {
	class_pointer = this;
	conversions = {};
}
