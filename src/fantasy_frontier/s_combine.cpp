#include "s_combine.hpp"

XLELib::FF::S_CombineError::S_CombineError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CombineError::what() const throw() {
	std::string ret = "[XLELib FF S_CombineError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Combine::S_Combine() : Table() {
	
}

XLELib::FF::S_Combine::S_Combine(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Combine::~S_Combine() {
	
}

