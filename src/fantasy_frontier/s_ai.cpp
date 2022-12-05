#include "s_ai.hpp"

XLELib::FF::S_AiError::S_AiError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_AiError::what() const throw() {
	std::string ret = "[XLELib FF S_AiError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Ai::S_Ai() : Table() {
	
}

XLELib::FF::S_Ai::S_Ai(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Ai::~S_Ai() {
	
}
