#include "s_collectscore.hpp"

XLELib::FF::S_CollectScoreError::S_CollectScoreError(std::string msg) {
	error = "[XLELib FF S_CollectScoreError] " + msg;
}

const char* XLELib::FF::S_CollectScoreError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CollectScore::S_CollectScore() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CollectScore::S_CollectScore(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CollectScore::~S_CollectScore() {
	
}

void XLELib::FF::S_CollectScore::init_conversion() {
	class_pointer = this;
	conversions = {};
}
