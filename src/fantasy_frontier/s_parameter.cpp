#include "s_parameter.hpp"

XLELib::FF::S_ParameterError::S_ParameterError(std::string msg) {
	error = "[XLELib FF S_ParameterError] " + msg;
}

const char* XLELib::FF::S_ParameterError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Parameter::S_Parameter() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Parameter::S_Parameter(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Parameter::~S_Parameter() {
	
}

void XLELib::FF::S_Parameter::init_conversion() {
	class_pointer = this;
	conversions = {};
}
