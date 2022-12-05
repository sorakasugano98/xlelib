#include "s_weaponskill.hpp"

XLELib::FF::S_WeaponSkillError::S_WeaponSkillError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_WeaponSkillError::what() const throw() {
	std::string ret = "[XLELib FF S_WeaponSkillError] " + error;
	return ret.c_str();
}

XLELib::FF::S_WeaponSkill::S_WeaponSkill() : Table() {
	
}

XLELib::FF::S_WeaponSkill::S_WeaponSkill(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_WeaponSkill::~S_WeaponSkill() {
	
}

