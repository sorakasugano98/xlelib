#include "s_growequip.hpp"

XLELib::FF::S_GrowEquipError::S_GrowEquipError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_GrowEquipError::what() const throw() {
	std::string ret = "[XLELib FF S_GrowEquipError] " + error;
	return ret.c_str();
}

XLELib::FF::S_GrowEquip::S_GrowEquip() : Table() {
	
}

XLELib::FF::S_GrowEquip::S_GrowEquip(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_GrowEquip::~S_GrowEquip() {
	
}

