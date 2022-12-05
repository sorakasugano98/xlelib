#include "s_familygame.hpp"

XLELib::FF::S_FamilyGameError::S_FamilyGameError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_FamilyGameError::what() const throw() {
	std::string ret = "[XLELib FF S_FamilyGameError] " + error;
	return ret.c_str();
}

XLELib::FF::S_FamilyGame::S_FamilyGame() : Table() {
	
}

XLELib::FF::S_FamilyGame::S_FamilyGame(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_FamilyGame::~S_FamilyGame() {
	
}

