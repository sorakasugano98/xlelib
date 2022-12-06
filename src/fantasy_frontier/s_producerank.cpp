#include "s_producerank.hpp"

XLELib::FF::S_ProduceRankError::S_ProduceRankError(std::string msg) {
	error = "[XLELib FF S_ProduceRankError] " + msg;
}

const char* XLELib::FF::S_ProduceRankError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_ProduceRank::S_ProduceRank() : Conversion() {
	init_conversion();
}

XLELib::FF::S_ProduceRank::S_ProduceRank(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_ProduceRank::~S_ProduceRank() {
	
}

void XLELib::FF::S_ProduceRank::init_conversion() {
	class_pointer = this;
	conversions = {};
}
