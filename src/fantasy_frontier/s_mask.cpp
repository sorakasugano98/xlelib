#include "s_mask.hpp"

XLELib::FF::S_MaskError::S_MaskError(std::string msg) {
	error = "[XLELib FF S_MaskError] " + msg;
}

const char* XLELib::FF::S_MaskError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Mask::S_Mask() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Mask::S_Mask(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Mask::~S_Mask() {
	
}

void XLELib::FF::S_Mask::init_conversion() {
	class_pointer = this;
	conversions = {};
}
