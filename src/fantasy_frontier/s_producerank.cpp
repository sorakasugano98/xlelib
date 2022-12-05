#include "s_producerank.hpp"

XLELib::FF::S_ProduceRankError::S_ProduceRankError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ProduceRankError::what() const throw() {
	std::string ret = "[XLELib FF S_ProduceRankError] " + error;
	return ret.c_str();
}

XLELib::FF::S_ProduceRank::S_ProduceRank() : Table() {
	
}

XLELib::FF::S_ProduceRank::S_ProduceRank(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_ProduceRank::~S_ProduceRank() {
	
}

