#include "s_syssetup.hpp"

XLELib::FF::S_SysSetupError::S_SysSetupError(std::string msg) {
	error = "[XLELib FF S_SysSetupError] " + msg;
}

const char* XLELib::FF::S_SysSetupError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_SysSetup::S_SysSetup() : Conversion() {
	init_conversion();
}

XLELib::FF::S_SysSetup::S_SysSetup(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_SysSetup::~S_SysSetup() {
	
}

void XLELib::FF::S_SysSetup::init_conversion() {
	class_pointer = this;
	conversions = {};
}
