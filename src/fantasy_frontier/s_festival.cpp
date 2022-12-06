#include "s_festival.hpp"

XLELib::FF::S_FestivalError::S_FestivalError(std::string msg) {
	error = "[XLELib FF S_FestivalError] " + msg;
}

const char* XLELib::FF::S_FestivalError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Festival::S_Festival() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Festival::S_Festival(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Festival::~S_Festival() {
	
}

void XLELib::FF::S_Festival::init_conversion() {
	class_pointer = this;
	conversions = {};
}
