#include "s_cardpvpfight.hpp"

XLELib::FF::S_CardPVPFightError::S_CardPVPFightError(std::string msg) {
	error = "[XLELib FF S_CardPVPFightError] " + msg;
}

const char* XLELib::FF::S_CardPVPFightError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CardPVPFight::S_CardPVPFight() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CardPVPFight::S_CardPVPFight(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CardPVPFight::~S_CardPVPFight() {
	
}

void XLELib::FF::S_CardPVPFight::init_conversion() {
	class_pointer = this;
	conversions = {};
}
