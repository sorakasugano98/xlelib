#include "s_eudemonrank.hpp"

XLELib::FF::S_EudemonRankError::S_EudemonRankError(std::string msg) {
	error = "[XLELib FF S_EudemonRankError] " + msg;
}

const char* XLELib::FF::S_EudemonRankError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonRank::S_EudemonRank() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonRank::S_EudemonRank(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonRank::~S_EudemonRank() {
	
}

void XLELib::FF::S_EudemonRank::init_conversion() {
	class_pointer = this;
	conversions = {};
}
