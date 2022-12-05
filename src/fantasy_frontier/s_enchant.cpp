#include "s_enchant.hpp"

XLELib::FF::S_EnchantError::S_EnchantError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EnchantError::what() const throw() {
	std::string ret = "[XLELib FF S_EnchantError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Enchant::S_Enchant() : Table() {
	
}

XLELib::FF::S_Enchant::S_Enchant(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Enchant::~S_Enchant() {
	
}

