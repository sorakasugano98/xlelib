#include "s_hunter.hpp"

XLELib::FF::S_HunterError::S_HunterError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_HunterError::what() const throw() {
	std::string ret = "[XLELib FF S_HunterError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Hunter::S_Hunter() : Table() {
	
}

XLELib::FF::S_Hunter::S_Hunter(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Hunter::~S_Hunter() {
	
}

