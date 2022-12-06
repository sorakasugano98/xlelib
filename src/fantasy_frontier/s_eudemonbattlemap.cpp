#include "s_eudemonbattlemap.hpp"

XLELib::FF::S_EudemonBattleMapError::S_EudemonBattleMapError(std::string msg) {
	error = "[XLELib FF S_EudemonBattleMapError] " + msg;
}

const char* XLELib::FF::S_EudemonBattleMapError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonBattleMap::S_EudemonBattleMap() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonBattleMap::S_EudemonBattleMap(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonBattleMap::~S_EudemonBattleMap() {
	
}

void XLELib::FF::S_EudemonBattleMap::init_conversion() {
	class_pointer = this;
	conversions = {};
}
