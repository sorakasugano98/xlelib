#include "s_statedependence.hpp"

XLELib::FF::S_StateDependenceError::S_StateDependenceError(std::string msg) {
	error = "[XLELib FF S_StateDependenceError] " + msg;
}

const char* XLELib::FF::S_StateDependenceError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_StateDependence::S_StateDependence() : Conversion() {
	init_conversion();
}

XLELib::FF::S_StateDependence::S_StateDependence(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_StateDependence::~S_StateDependence() {
	
}

void XLELib::FF::S_StateDependence::init_conversion() {
	class_pointer = this;
	conversions = {};
}
