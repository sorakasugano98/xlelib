#include "s_rankaward.hpp"

XLELib::FF::S_RankAwardError::S_RankAwardError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_RankAwardError::what() const throw() {
	std::string ret = "[XLELib FF S_RankAwardError] " + error;
	return ret.c_str();
}

XLELib::FF::S_RankAward::S_RankAward() : Table() {
	
}

XLELib::FF::S_RankAward::S_RankAward(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_RankAward::~S_RankAward() {
	
}

