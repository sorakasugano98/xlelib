#include "s_cardenchant.hpp"

XLELib::FF::S_CardEnchantError::S_CardEnchantError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CardEnchantError::what() const throw() {
	std::string ret = "[XLELib FF S_CardEnchantError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CardEnchant::S_CardEnchant() : Table() {
	
}

XLELib::FF::S_CardEnchant::S_CardEnchant(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CardEnchant::~S_CardEnchant() {
	
}
