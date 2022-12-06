#include "s_cardfight.hpp"

XLELib::FF::S_CardFightError::S_CardFightError(std::string msg) {
	error = "[XLELib FF S_CardFightError] " + msg;
}

const char* XLELib::FF::S_CardFightError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CardFight::S_CardFight() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CardFight::S_CardFight(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CardFight::~S_CardFight() {
	
}

void XLELib::FF::S_CardFight::init_conversion() {
	class_pointer = this;
	conversions = {};
}
