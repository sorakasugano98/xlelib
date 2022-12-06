#include "s_weaponskill.hpp"

XLELib::FF::S_WeaponSkillError::S_WeaponSkillError(std::string msg) {
	error = "[XLELib FF S_WeaponSkillError] " + msg;
}

const char* XLELib::FF::S_WeaponSkillError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_WeaponSkill::S_WeaponSkill() : Conversion() {
	init_conversion();
}

XLELib::FF::S_WeaponSkill::S_WeaponSkill(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_WeaponSkill::~S_WeaponSkill() {
	
}

void XLELib::FF::S_WeaponSkill::init_conversion() {
	class_pointer = this;
	conversions = {};
}
