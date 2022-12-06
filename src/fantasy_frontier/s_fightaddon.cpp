#include "s_fightaddon.hpp"

XLELib::FF::S_FightAddonError::S_FightAddonError(std::string msg) {
	error = "[XLELib FF S_FightAddonError] " + msg;
}

const char* XLELib::FF::S_FightAddonError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_FightAddon::S_FightAddon() : Conversion() {
	init_conversion();
}

XLELib::FF::S_FightAddon::S_FightAddon(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_FightAddon::~S_FightAddon() {
	
}

void XLELib::FF::S_FightAddon::init_conversion() {
	class_pointer = this;
	conversions = {};
}
