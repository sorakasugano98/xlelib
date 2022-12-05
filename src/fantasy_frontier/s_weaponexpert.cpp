#include "s_weaponexpert.hpp"

XLELib::FF::S_WeaponExpertError::S_WeaponExpertError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_WeaponExpertError::what() const throw() {
	std::string ret = "[XLELib FF S_WeaponExpertError] " + error;
	return ret.c_str();
}

XLELib::FF::S_WeaponExpert::S_WeaponExpert() : Table() {
	
}

XLELib::FF::S_WeaponExpert::S_WeaponExpert(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_WeaponExpert::~S_WeaponExpert() {
	
}

