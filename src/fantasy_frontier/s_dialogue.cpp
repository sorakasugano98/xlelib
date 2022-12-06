#include "s_dialogue.hpp"

XLELib::FF::S_DialogueError::S_DialogueError(std::string msg) {
	error = "[XLELib FF S_DialogueError] " + msg;
}

const char* XLELib::FF::S_DialogueError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Dialogue::S_Dialogue() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Dialogue::S_Dialogue(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Dialogue::~S_Dialogue() {
	
}

void XLELib::FF::S_Dialogue::init_conversion() {
	class_pointer = this;
	conversions = {};
}
