#include "s_fightaddon.hpp"

XLELib::FF::S_FightAddonError::S_FightAddonError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_FightAddonError::what() const throw() {
	std::string ret = "[XLELib FF S_FightAddonError] " + error;
	return ret.c_str();
}

XLELib::FF::S_FightAddon::S_FightAddon() : Table() {
	
}

XLELib::FF::S_FightAddon::S_FightAddon(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_FightAddon::~S_FightAddon() {
	
}

