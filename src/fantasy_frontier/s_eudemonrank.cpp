#include "s_eudemonrank.hpp"

XLELib::FF::S_EudemonRankError::S_EudemonRankError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonRankError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonRankError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonRank::S_EudemonRank() : Table() {
	
}

XLELib::FF::S_EudemonRank::S_EudemonRank(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonRank::~S_EudemonRank() {
	
}

