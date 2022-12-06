#include "s_coupletitle.hpp"

XLELib::FF::S_CoupleTitleError::S_CoupleTitleError(std::string msg) {
	error = "[XLELib FF S_CoupleTitleError] " + msg;
}

const char* XLELib::FF::S_CoupleTitleError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CoupleTitle::S_CoupleTitle() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CoupleTitle::S_CoupleTitle(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CoupleTitle::~S_CoupleTitle() {
	
}

void XLELib::FF::S_CoupleTitle::init_conversion() {
	class_pointer = this;
	conversions = {};
}
