#include "s_reward.hpp"

XLELib::FF::S_RewardError::S_RewardError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_RewardError::what() const throw() {
	std::string ret = "[XLELib FF S_RewardError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Reward::S_Reward() : Table() {
	
}

XLELib::FF::S_Reward::S_Reward(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Reward::~S_Reward() {
	
}

