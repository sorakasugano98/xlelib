#include "s_divination.hpp"

XLELib::FF::S_DivinationError::S_DivinationError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_DivinationError::what() const throw() {
	std::string ret = "[XLELib FF S_DivinationError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Divination::S_Divination() : Table() {
	
}

XLELib::FF::S_Divination::S_Divination(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Divination::~S_Divination() {
	
}

