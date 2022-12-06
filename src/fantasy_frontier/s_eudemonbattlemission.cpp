#include "s_eudemonbattlemission.hpp"

XLELib::FF::S_EudemonBattleMissionError::S_EudemonBattleMissionError(std::string msg) {
	error = "[XLELib FF S_EudemonBattleMissionError] " + msg;
}

const char* XLELib::FF::S_EudemonBattleMissionError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonBattleMission::S_EudemonBattleMission() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonBattleMission::S_EudemonBattleMission(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonBattleMission::~S_EudemonBattleMission() {
	
}

void XLELib::FF::S_EudemonBattleMission::init_conversion() {
	class_pointer = this;
	conversions = {};
}
