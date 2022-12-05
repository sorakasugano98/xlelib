#include "s_collect.hpp"

XLELib::FF::S_CollectError::S_CollectError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CollectError::what() const throw() {
	std::string ret = "[XLELib FF S_CollectError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Collect::S_Collect() : Table() {
	
}

XLELib::FF::S_Collect::S_Collect(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Collect::~S_Collect() {
	
}

