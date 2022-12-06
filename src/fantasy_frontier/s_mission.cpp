#include "s_mission.hpp"

XLELib::FF::S_MissionError::S_MissionError(std::string msg) {
	error = "[XLELib FF S_MissionError] " + msg;
}

const char* XLELib::FF::S_MissionError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Mission::S_Mission() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Mission::S_Mission(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Mission::~S_Mission() {
	
}

void XLELib::FF::S_Mission::init_conversion() {
	class_pointer = this;
	conversions = {};
}
