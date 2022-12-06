#include "s_cardenchant.hpp"

XLELib::FF::S_CardEnchantError::S_CardEnchantError(std::string msg) {
	error = "[XLELib FF S_CardEnchantError] " + msg;
}

const char* XLELib::FF::S_CardEnchantError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CardEnchant::S_CardEnchant() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CardEnchant::S_CardEnchant(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CardEnchant::~S_CardEnchant() {
	
}

void XLELib::FF::S_CardEnchant::init_conversion() {
	class_pointer = this;
	conversions = {};
}
