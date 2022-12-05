#include "s_fightbalance.hpp"

XLELib::FF::S_FightBalanceError::S_FightBalanceError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_FightBalanceError::what() const throw() {
	std::string ret = "[XLELib FF S_FightBalanceError] " + error;
	return ret.c_str();
}

XLELib::FF::S_FightBalance::S_FightBalance() : Table() {
	
}

XLELib::FF::S_FightBalance::S_FightBalance(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_FightBalance::~S_FightBalance() {
	
}

