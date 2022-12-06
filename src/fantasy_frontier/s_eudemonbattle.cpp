#include "s_eudemonbattle.hpp"

XLELib::FF::S_EudemonBattleError::S_EudemonBattleError(std::string msg) {
	error = "[XLELib FF S_EudemonBattleError] " + msg;
}

const char* XLELib::FF::S_EudemonBattleError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonBattle::S_EudemonBattle() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonBattle::S_EudemonBattle(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonBattle::~S_EudemonBattle() {
	
}

void XLELib::FF::S_EudemonBattle::init_conversion() {
	class_pointer = this;
	conversions = {};
}
