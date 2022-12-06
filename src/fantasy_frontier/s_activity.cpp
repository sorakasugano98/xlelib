#include "s_activity.hpp"

XLELib::FF::S_ActivityError::S_ActivityError(std::string msg) {
	error = "[XLELib FF S_ActivityError] " + msg;
}

const char* XLELib::FF::S_ActivityError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Activity::S_Activity() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Activity::S_Activity(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Activity::~S_Activity() {
	
}

void XLELib::FF::S_Activity::init_conversion() {
	class_pointer = this;
	conversions = {};
}
