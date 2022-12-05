#include "s_itemmallenchant.hpp"

XLELib::FF::S_ItemMallEnchantError::S_ItemMallEnchantError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ItemMallEnchantError::what() const throw() {
	std::string ret = "[XLELib FF S_ItemMallEnchantError] " + error;
	return ret.c_str();
}

XLELib::FF::S_ItemMallEnchant::S_ItemMallEnchant() : Table() {
	
}

XLELib::FF::S_ItemMallEnchant::S_ItemMallEnchant(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_ItemMallEnchant::~S_ItemMallEnchant() {
	
}

