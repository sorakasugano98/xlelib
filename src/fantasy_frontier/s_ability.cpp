#include "s_ability.hpp"

XLELib::FF::S_AbilityError::S_AbilityError(std::string msg) {
	error = "[XLELib FF S_AbilityError] " + msg;
}

const char* XLELib::FF::S_AbilityError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Ability::S_Ability() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Ability::S_Ability(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Ability::~S_Ability() {
	
}

void XLELib::FF::S_Ability::init_conversion() {
	class_pointer = this;
	conversions = {};
}
