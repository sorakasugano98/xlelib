#include "s_customequip.hpp"

XLELib::FF::S_CustomEquipError::S_CustomEquipError(std::string msg) {
	error = "[XLELib FF S_CustomEquipError] " + msg;
}

const char* XLELib::FF::S_CustomEquipError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CustomEquip::S_CustomEquip() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CustomEquip::S_CustomEquip(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CustomEquip::~S_CustomEquip() {
	
}

void XLELib::FF::S_CustomEquip::init_conversion() {
	class_pointer = this;
	conversions = {};
}
