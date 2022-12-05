#include "s_wizzard.hpp"

XLELib::FF::S_WizzardError::S_WizzardError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_WizzardError::what() const throw() {
	std::string ret = "[XLELib FF S_WizzardError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Wizzard::S_Wizzard() : Table() {
	
}

XLELib::FF::S_Wizzard::S_Wizzard(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Wizzard::~S_Wizzard() {
	
}

