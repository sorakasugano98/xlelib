#include "s_achievement.hpp"

XLELib::FF::S_AchievementError::S_AchievementError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_AchievementError::what() const throw() {
	std::string ret = "[XLELib FF S_AchievementError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Achievement::S_Achievement() : Table() {
	
}

XLELib::FF::S_Achievement::S_Achievement(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Achievement::~S_Achievement() {
	
}
