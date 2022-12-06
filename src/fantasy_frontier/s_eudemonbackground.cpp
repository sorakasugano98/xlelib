#include "s_eudemonbackground.hpp"

XLELib::FF::S_EudemonBackgroundError::S_EudemonBackgroundError(std::string msg) {
	error = "[XLELib FF S_EudemonBackgroundError] " + msg;
}

const char* XLELib::FF::S_EudemonBackgroundError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonBackground::S_EudemonBackground() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonBackground::S_EudemonBackground(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonBackground::~S_EudemonBackground() {
	
}

void XLELib::FF::S_EudemonBackground::init_conversion() {
	class_pointer = this;
	conversions = {};
}
