#include "s_eudemonbattleenchant.hpp"

XLELib::FF::S_EudemonBattleEnchantError::S_EudemonBattleEnchantError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonBattleEnchantError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonBattleEnchantError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonBattleEnchant::S_EudemonBattleEnchant() : Table() {
	
}

XLELib::FF::S_EudemonBattleEnchant::S_EudemonBattleEnchant(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonBattleEnchant::~S_EudemonBattleEnchant() {
	
}

