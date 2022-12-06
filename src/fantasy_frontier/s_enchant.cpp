#include "s_enchant.hpp"

XLELib::FF::S_EnchantError::S_EnchantError(std::string msg) {
	error = "[XLELib FF S_EnchantError] " + msg;
}

const char* XLELib::FF::S_EnchantError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Enchant::S_Enchant() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Enchant::S_Enchant(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Enchant::~S_Enchant() {
	
}

void XLELib::FF::S_Enchant::init_conversion() {
	class_pointer = this;
	conversions = {};
}
