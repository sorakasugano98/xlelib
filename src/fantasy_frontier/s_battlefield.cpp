#include "s_battlefield.hpp"

XLELib::FF::S_BattlefieldError::S_BattlefieldError(std::string msg) {
	error = "[XLELib FF S_BattlefieldError] " + msg;
}

const char* XLELib::FF::S_BattlefieldError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Battlefield::S_Battlefield() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Battlefield::S_Battlefield(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Battlefield::~S_Battlefield() {
	
}

void XLELib::FF::S_Battlefield::init_conversion() {
	class_pointer = this;
	conversions = {};
}
