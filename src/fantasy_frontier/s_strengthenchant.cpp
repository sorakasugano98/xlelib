#include "s_strengthenchant.hpp"

XLELib::FF::S_StrengthEnchantError::S_StrengthEnchantError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_StrengthEnchantError::what() const throw() {
	std::string ret = "[XLELib FF S_StrengthEnchantError] " + error;
	return ret.c_str();
}

XLELib::FF::S_StrengthEnchant::S_StrengthEnchant() : Table() {
	
}

XLELib::FF::S_StrengthEnchant::S_StrengthEnchant(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_StrengthEnchant::~S_StrengthEnchant() {
	
}

