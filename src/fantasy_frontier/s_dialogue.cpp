#include "s_dialogue.hpp"

XLELib::FF::S_DialogueError::S_DialogueError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_DialogueError::what() const throw() {
	std::string ret = "[XLELib FF S_DialogueError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Dialogue::S_Dialogue() : Table() {
	
}

XLELib::FF::S_Dialogue::S_Dialogue(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Dialogue::~S_Dialogue() {
	
}

