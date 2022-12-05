#include "s_syssetup.hpp"

XLELib::FF::S_SysSetupError::S_SysSetupError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_SysSetupError::what() const throw() {
	std::string ret = "[XLELib FF S_SysSetupError] " + error;
	return ret.c_str();
}

XLELib::FF::S_SysSetup::S_SysSetup() : Table() {
	
}

XLELib::FF::S_SysSetup::S_SysSetup(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_SysSetup::~S_SysSetup() {
	
}

