#include "s_produce.hpp"

XLELib::FF::S_ProduceError::S_ProduceError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ProduceError::what() const throw() {
	std::string ret = "[XLELib FF S_ProduceError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Produce::S_Produce() : Table() {
	
}

XLELib::FF::S_Produce::S_Produce(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Produce::~S_Produce() {
	
}

