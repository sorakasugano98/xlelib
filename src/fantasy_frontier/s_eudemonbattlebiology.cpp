#include "s_eudemonbattlebiology.hpp"

XLELib::FF::S_EudemonBattleBiologyError::S_EudemonBattleBiologyError(std::string msg) {
	error = "[XLELib FF S_EudemonBattleBiologyError] " + msg;
}

const char* XLELib::FF::S_EudemonBattleBiologyError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonBattleBiology::S_EudemonBattleBiology() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonBattleBiology::S_EudemonBattleBiology(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonBattleBiology::~S_EudemonBattleBiology() {
	
}

void XLELib::FF::S_EudemonBattleBiology::init_conversion() {
	class_pointer = this;
	conversions = {};
}
