#include "s_coupletitle.hpp"

XLELib::FF::S_CoupleTitleError::S_CoupleTitleError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CoupleTitleError::what() const throw() {
	std::string ret = "[XLELib FF S_CoupleTitleError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CoupleTitle::S_CoupleTitle() : Table() {
	
}

XLELib::FF::S_CoupleTitle::S_CoupleTitle(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CoupleTitle::~S_CoupleTitle() {
	
}

