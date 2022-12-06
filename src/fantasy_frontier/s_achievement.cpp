#include "s_achievement.hpp"

XLELib::FF::S_AchievementError::S_AchievementError(std::string msg) {
	error = "[XLELib FF S_AchievementError] " + msg;
}

const char* XLELib::FF::S_AchievementError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Achievement::S_Achievement() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Achievement::S_Achievement(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Achievement::~S_Achievement() {
	
}

void XLELib::FF::S_Achievement::init_conversion() {
	class_pointer = this;
	conversions = {};
}
