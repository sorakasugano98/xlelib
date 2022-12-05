#include "s_eudemoncollect.hpp"

XLELib::FF::S_EudemonCollectError::S_EudemonCollectError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonCollectError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonCollectError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonCollect::S_EudemonCollect() : Table() {
	
}

XLELib::FF::S_EudemonCollect::S_EudemonCollect(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonCollect::~S_EudemonCollect() {
	
}

