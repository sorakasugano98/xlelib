#include "s_cardpvpfight.hpp"

XLELib::FF::S_CardPVPFightError::S_CardPVPFightError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CardPVPFightError::what() const throw() {
	std::string ret = "[XLELib FF S_CardPVPFightError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CardPVPFight::S_CardPVPFight() : Table() {
	
}

XLELib::FF::S_CardPVPFight::S_CardPVPFight(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CardPVPFight::~S_CardPVPFight() {
	
}
