#include "s_coupleevent.hpp"

XLELib::FF::S_CoupleEventError::S_CoupleEventError(std::string msg) {
	error = "[XLELib FF S_CoupleEventError] " + msg;
}

const char* XLELib::FF::S_CoupleEventError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CoupleEvent::S_CoupleEvent() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CoupleEvent::S_CoupleEvent(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CoupleEvent::~S_CoupleEvent() {
	
}

void XLELib::FF::S_CoupleEvent::init_conversion() {
	class_pointer = this;
	conversions = {};
}
