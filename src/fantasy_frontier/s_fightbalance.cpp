#include "s_fightbalance.hpp"

XLELib::FF::S_FightBalanceError::S_FightBalanceError(std::string msg) {
	error = "[XLELib FF S_FightBalanceError] " + msg;
}

const char* XLELib::FF::S_FightBalanceError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_FightBalance::S_FightBalance() : Conversion() {
	init_conversion();
}

XLELib::FF::S_FightBalance::S_FightBalance(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_FightBalance::~S_FightBalance() {
	
}

void XLELib::FF::S_FightBalance::init_conversion() {
	class_pointer = this;
	conversions = {};
}
