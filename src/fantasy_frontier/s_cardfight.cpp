#include "s_cardfight.hpp"

XLELib::FF::S_CardFightError::S_CardFightError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CardFightError::what() const throw() {
	std::string ret = "[XLELib FF S_CardFightError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CardFight::S_CardFight() : Table() {
	
}

XLELib::FF::S_CardFight::S_CardFight(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CardFight::~S_CardFight() {
	
}
