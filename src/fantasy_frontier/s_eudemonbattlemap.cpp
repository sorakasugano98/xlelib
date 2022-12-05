#include "s_eudemonbattlemap.hpp"

XLELib::FF::S_EudemonBattleMapError::S_EudemonBattleMapError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonBattleMapError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonBattleMapError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonBattleMap::S_EudemonBattleMap() : Table() {
	
}

XLELib::FF::S_EudemonBattleMap::S_EudemonBattleMap(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonBattleMap::~S_EudemonBattleMap() {
	
}

