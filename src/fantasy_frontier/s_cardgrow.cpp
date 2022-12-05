#include "s_cardgrow.hpp"

XLELib::FF::S_CardGrowError::S_CardGrowError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CardGrowError::what() const throw() {
	std::string ret = "[XLELib FF S_CardGrowError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CardGrow::S_CardGrow() : Table() {
	
}

XLELib::FF::S_CardGrow::S_CardGrow(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CardGrow::~S_CardGrow() {
	
}
