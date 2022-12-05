#include "s_lottery.hpp"

XLELib::FF::S_LotteryError::S_LotteryError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_LotteryError::what() const throw() {
	std::string ret = "[XLELib FF S_LotteryError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Lottery::S_Lottery() : Table() {
	
}

XLELib::FF::S_Lottery::S_Lottery(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Lottery::~S_Lottery() {
	
}

