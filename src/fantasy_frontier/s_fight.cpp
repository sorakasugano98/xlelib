#include "s_fight.hpp"

XLELib::FF::S_FightError::S_FightError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_FightError::what() const throw() {
	std::string ret = "[XLELib FF S_FightError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Fight::S_Fight() : Table() {
	
}

XLELib::FF::S_Fight::S_Fight(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Fight::~S_Fight() {
	
}

