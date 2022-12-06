#include "s_rogue.hpp"

XLELib::FF::S_RogueError::S_RogueError(std::string msg) {
	error = "[XLELib FF S_RogueError] " + msg;
}

const char* XLELib::FF::S_RogueError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Rogue::S_Rogue() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Rogue::S_Rogue(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Rogue::~S_Rogue() {
	
}

void XLELib::FF::S_Rogue::init_conversion() {
	class_pointer = this;
	conversions = {};
}
