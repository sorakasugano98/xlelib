#include "s_fight.hpp"

XLELib::FF::S_FightError::S_FightError(std::string msg) {
	error = "[XLELib FF S_FightError] " + msg;
}

const char* XLELib::FF::S_FightError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Fight::S_Fight() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Fight::S_Fight(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Fight::~S_Fight() {
	
}

void XLELib::FF::S_Fight::init_conversion() {
	class_pointer = this;
	conversions = {};
}
