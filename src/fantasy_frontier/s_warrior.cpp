#include "s_warrior.hpp"

XLELib::FF::S_WarriorError::S_WarriorError(std::string msg) {
	error = "[XLELib FF S_WarriorError] " + msg;
}

const char* XLELib::FF::S_WarriorError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Warrior::S_Warrior() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Warrior::S_Warrior(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Warrior::~S_Warrior() {
	
}

void XLELib::FF::S_Warrior::init_conversion() {
	class_pointer = this;
	conversions = {};
}
