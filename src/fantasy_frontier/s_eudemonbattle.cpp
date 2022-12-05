#include "s_eudemonbattle.hpp"

XLELib::FF::S_EudemonBattleError::S_EudemonBattleError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonBattleError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonBattleError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonBattle::S_EudemonBattle() : Table() {
	
}

XLELib::FF::S_EudemonBattle::S_EudemonBattle(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonBattle::~S_EudemonBattle() {
	
}

