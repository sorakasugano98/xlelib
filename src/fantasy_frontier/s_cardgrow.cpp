#include "s_cardgrow.hpp"

XLELib::FF::S_CardGrowError::S_CardGrowError(std::string msg) {
	error = "[XLELib FF S_CardGrowError] " + msg;
}

const char* XLELib::FF::S_CardGrowError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CardGrow::S_CardGrow() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CardGrow::S_CardGrow(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CardGrow::~S_CardGrow() {
	
}

void XLELib::FF::S_CardGrow::init_conversion() {
	class_pointer = this;
	conversions = {};
}
