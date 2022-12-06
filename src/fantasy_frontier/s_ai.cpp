#include "s_ai.hpp"

XLELib::FF::S_AiError::S_AiError(std::string msg) {
	error = "[XLELib FF S_AiError] " + msg;
}

const char* XLELib::FF::S_AiError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Ai::S_Ai() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Ai::S_Ai(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Ai::~S_Ai() {
	
}

void XLELib::FF::S_Ai::init_conversion() {
	class_pointer = this;
	conversions = {};
}
