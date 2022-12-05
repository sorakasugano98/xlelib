#include "s_treasureindex.hpp"

XLELib::FF::S_TreasureIndexError::S_TreasureIndexError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_TreasureIndexError::what() const throw() {
	std::string ret = "[XLELib FF S_TreasureIndexError] " + error;
	return ret.c_str();
}

XLELib::FF::S_TreasureIndex::S_TreasureIndex() : Table() {
	
}

XLELib::FF::S_TreasureIndex::S_TreasureIndex(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_TreasureIndex::~S_TreasureIndex() {
	
}

