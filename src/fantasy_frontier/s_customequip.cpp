#include "s_customequip.hpp"

XLELib::FF::S_CustomEquipError::S_CustomEquipError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CustomEquipError::what() const throw() {
	std::string ret = "[XLELib FF S_CustomEquipError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CustomEquip::S_CustomEquip() : Table() {
	
}

XLELib::FF::S_CustomEquip::S_CustomEquip(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CustomEquip::~S_CustomEquip() {
	
}

