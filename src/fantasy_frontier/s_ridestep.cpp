#include "s_ridestep.hpp"

XLELib::FF::S_RideStepError::S_RideStepError(std::string msg) {
	error = "[XLELib FF S_RideStepError] " + msg;
}

const char* XLELib::FF::S_RideStepError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_RideStep::S_RideStep() : Conversion() {
	init_conversion();
}

XLELib::FF::S_RideStep::S_RideStep(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_RideStep::~S_RideStep() {
	
}

void XLELib::FF::S_RideStep::init_conversion() {
	class_pointer = this;
	conversions = {};
}
