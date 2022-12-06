#include "s_lottery.hpp"

XLELib::FF::S_LotteryError::S_LotteryError(std::string msg) {
	error = "[XLELib FF S_LotteryError] " + msg;
}

const char* XLELib::FF::S_LotteryError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Lottery::S_Lottery() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Lottery::S_Lottery(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Lottery::~S_Lottery() {
	
}

void XLELib::FF::S_Lottery::init_conversion() {
	class_pointer = this;
	conversions = {};
}
