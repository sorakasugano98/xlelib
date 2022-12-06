#include "s_weaponexpert.hpp"

XLELib::FF::S_WeaponExpertError::S_WeaponExpertError(std::string msg) {
	error = "[XLELib FF S_WeaponExpertError] " + msg;
}

const char* XLELib::FF::S_WeaponExpertError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_WeaponExpert::S_WeaponExpert() : Conversion() {
	init_conversion();
}

XLELib::FF::S_WeaponExpert::S_WeaponExpert(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_WeaponExpert::~S_WeaponExpert() {
	
}

void XLELib::FF::S_WeaponExpert::init_conversion() {
	class_pointer = this;
	conversions = {};
}
