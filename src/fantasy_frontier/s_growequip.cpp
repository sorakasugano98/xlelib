#include "s_growequip.hpp"

XLELib::FF::S_GrowEquipError::S_GrowEquipError(std::string msg) {
	error = "[XLELib FF S_GrowEquipError] " + msg;
}

const char* XLELib::FF::S_GrowEquipError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_GrowEquip::S_GrowEquip() : Conversion() {
	init_conversion();
}

XLELib::FF::S_GrowEquip::S_GrowEquip(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_GrowEquip::~S_GrowEquip() {
	
}

void XLELib::FF::S_GrowEquip::init_conversion() {
	class_pointer = this;
	conversions = {};
}
