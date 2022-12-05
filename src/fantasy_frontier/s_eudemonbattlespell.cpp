#include "s_eudemonbattlespell.hpp"

XLELib::FF::S_EudemonBattleSpellError::S_EudemonBattleSpellError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonBattleSpellError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonBattleSpellError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonBattleSpell::S_EudemonBattleSpell() : Table() {
	
}

XLELib::FF::S_EudemonBattleSpell::S_EudemonBattleSpell(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonBattleSpell::~S_EudemonBattleSpell() {
	
}

