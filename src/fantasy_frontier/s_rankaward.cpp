#include "s_rankaward.hpp"

XLELib::FF::S_RankAwardError::S_RankAwardError(std::string msg) {
	error = "[XLELib FF S_RankAwardError] " + msg;
}

const char* XLELib::FF::S_RankAwardError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_RankAward::S_RankAward() : Conversion() {
	init_conversion();
}

XLELib::FF::S_RankAward::S_RankAward(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_RankAward::~S_RankAward() {
	
}

void XLELib::FF::S_RankAward::init_conversion() {
	class_pointer = this;
	conversions = {};
}
