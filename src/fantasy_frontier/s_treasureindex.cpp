#include "s_treasureindex.hpp"

XLELib::FF::S_TreasureIndexError::S_TreasureIndexError(std::string msg) {
	error = "[XLELib FF S_TreasureIndexError] " + msg;
}

const char* XLELib::FF::S_TreasureIndexError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_TreasureIndex::S_TreasureIndex() : Conversion() {
	init_conversion();
}

XLELib::FF::S_TreasureIndex::S_TreasureIndex(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_TreasureIndex::~S_TreasureIndex() {
	
}

void XLELib::FF::S_TreasureIndex::init_conversion() {
	class_pointer = this;
	conversions = {};
}
