#include "s_strengthenchant.hpp"

XLELib::FF::S_StrengthEnchantError::S_StrengthEnchantError(std::string msg) {
	error = "[XLELib FF S_StrengthEnchantError] " + msg;
}

const char* XLELib::FF::S_StrengthEnchantError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_StrengthEnchant::S_StrengthEnchant() : Conversion() {
	init_conversion();
}

XLELib::FF::S_StrengthEnchant::S_StrengthEnchant(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_StrengthEnchant::~S_StrengthEnchant() {
	
}

void XLELib::FF::S_StrengthEnchant::init_conversion() {
	class_pointer = this;
	conversions = {};
}
