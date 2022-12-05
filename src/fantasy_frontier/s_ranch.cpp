#include "s_ranch.hpp"

XLELib::FF::S_RanchError::S_RanchError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_RanchError::what() const throw() {
	std::string ret = "[XLELib FF S_RanchError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Ranch::S_Ranch() : Table() {
	
}

XLELib::FF::S_Ranch::S_Ranch(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Ranch::~S_Ranch() {
	
}

