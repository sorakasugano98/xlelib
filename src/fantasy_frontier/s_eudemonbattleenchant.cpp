#include "s_eudemonbattleenchant.hpp"

XLELib::FF::S_EudemonBattleEnchantError::S_EudemonBattleEnchantError(std::string msg) {
	error = "[XLELib FF S_EudemonBattleEnchantError] " + msg;
}

const char* XLELib::FF::S_EudemonBattleEnchantError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonBattleEnchant::S_EudemonBattleEnchant() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonBattleEnchant::S_EudemonBattleEnchant(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonBattleEnchant::~S_EudemonBattleEnchant() {
	
}

void XLELib::FF::S_EudemonBattleEnchant::init_conversion() {
	class_pointer = this;
	conversions = {};
}
