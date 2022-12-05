#include "s_festival.hpp"

XLELib::FF::S_FestivalError::S_FestivalError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_FestivalError::what() const throw() {
	std::string ret = "[XLELib FF S_FestivalError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Festival::S_Festival() : Table() {
	
}

XLELib::FF::S_Festival::S_Festival(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Festival::~S_Festival() {
	
}

