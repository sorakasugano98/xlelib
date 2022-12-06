#include "s_familygame.hpp"

XLELib::FF::S_FamilyGameError::S_FamilyGameError(std::string msg) {
	error = "[XLELib FF S_FamilyGameError] " + msg;
}

const char* XLELib::FF::S_FamilyGameError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_FamilyGame::S_FamilyGame() : Conversion() {
	init_conversion();
}

XLELib::FF::S_FamilyGame::S_FamilyGame(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_FamilyGame::~S_FamilyGame() {
	
}

void XLELib::FF::S_FamilyGame::init_conversion() {
	class_pointer = this;
	conversions = {};
}
