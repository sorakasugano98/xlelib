#include "s_equipset.hpp"

XLELib::FF::S_EquipSetError::S_EquipSetError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EquipSetError::what() const throw() {
	std::string ret = "[XLELib FF S_EquipSetError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EquipSet::S_EquipSet() : Table() {
	
}

XLELib::FF::S_EquipSet::S_EquipSet(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EquipSet::~S_EquipSet() {
	
}

