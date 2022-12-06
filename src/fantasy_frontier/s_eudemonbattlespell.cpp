#include "s_eudemonbattlespell.hpp"

XLELib::FF::S_EudemonBattleSpellError::S_EudemonBattleSpellError(std::string msg) {
	error = "[XLELib FF S_EudemonBattleSpellError] " + msg;
}

const char* XLELib::FF::S_EudemonBattleSpellError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonBattleSpell::S_EudemonBattleSpell() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonBattleSpell::S_EudemonBattleSpell(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonBattleSpell::~S_EudemonBattleSpell() {
	
}

void XLELib::FF::S_EudemonBattleSpell::init_conversion() {
	class_pointer = this;
	conversions = {};
}
