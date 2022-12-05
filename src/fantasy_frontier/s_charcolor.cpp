#include "s_charcolor.hpp"

XLELib::FF::S_CharColorError::S_CharColorError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CharColorError::what() const throw() {
	std::string ret = "[XLELib FF S_CharColorError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CharColor::S_CharColor() : Table() {
	
}

XLELib::FF::S_CharColor::S_CharColor(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CharColor::~S_CharColor() {
	
}

