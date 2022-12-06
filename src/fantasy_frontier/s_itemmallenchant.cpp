#include "s_itemmallenchant.hpp"

XLELib::FF::S_ItemMallEnchantError::S_ItemMallEnchantError(std::string msg) {
	error = "[XLELib FF S_ItemMallEnchantError] " + msg;
}

const char* XLELib::FF::S_ItemMallEnchantError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_ItemMallEnchant::S_ItemMallEnchant() : Conversion() {
	init_conversion();
}

XLELib::FF::S_ItemMallEnchant::S_ItemMallEnchant(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_ItemMallEnchant::~S_ItemMallEnchant() {
	
}

void XLELib::FF::S_ItemMallEnchant::init_conversion() {
	class_pointer = this;
	conversions = {};
}
