#include "s_collectscore.hpp"

XLELib::FF::S_CollectScoreError::S_CollectScoreError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CollectScoreError::what() const throw() {
	std::string ret = "[XLELib FF S_CollectScoreError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CollectScore::S_CollectScore() : Table() {
	
}

XLELib::FF::S_CollectScore::S_CollectScore(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CollectScore::~S_CollectScore() {
	
}

