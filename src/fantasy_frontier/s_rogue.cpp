#include "s_rogue.hpp"

XLELib::FF::S_RogueError::S_RogueError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_RogueError::what() const throw() {
	std::string ret = "[XLELib FF S_RogueError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Rogue::S_Rogue() : Table() {
	
}

XLELib::FF::S_Rogue::S_Rogue(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Rogue::~S_Rogue() {
	
}

