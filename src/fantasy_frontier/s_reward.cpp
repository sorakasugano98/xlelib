#include "s_reward.hpp"

XLELib::FF::S_RewardError::S_RewardError(std::string msg) {
	error = "[XLELib FF S_RewardError] " + msg;
}

const char* XLELib::FF::S_RewardError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Reward::S_Reward() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Reward::S_Reward(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Reward::~S_Reward() {
	
}

void XLELib::FF::S_Reward::init_conversion() {
	class_pointer = this;
	conversions = {};
}
