#include "s_toxiccircle.hpp"

XLELib::FF::S_ToxicCircleError::S_ToxicCircleError(std::string msg) {
	error = "[XLELib FF S_ToxicCircleError] " + msg;
}

const char* XLELib::FF::S_ToxicCircleError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_ToxicCircle::S_ToxicCircle() : Conversion() {
	init_conversion();
}

XLELib::FF::S_ToxicCircle::S_ToxicCircle(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_ToxicCircle::~S_ToxicCircle() {
	
}

void XLELib::FF::S_ToxicCircle::init_conversion() {
	class_pointer = this;
	conversions = {};
}
