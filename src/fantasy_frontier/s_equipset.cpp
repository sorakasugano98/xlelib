#include "s_equipset.hpp"

XLELib::FF::S_EquipSetError::S_EquipSetError(std::string msg) {
	error = "[XLELib FF S_EquipSetError] " + msg;
}

const char* XLELib::FF::S_EquipSetError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EquipSet::S_EquipSet() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EquipSet::S_EquipSet(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EquipSet::~S_EquipSet() {
	
}

void XLELib::FF::S_EquipSet::init_conversion() {
	class_pointer = this;
	conversions = {};
}
