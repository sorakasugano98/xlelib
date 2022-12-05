#include "s_itemcombo.hpp"

XLELib::FF::S_ItemComboError::S_ItemComboError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ItemComboError::what() const throw() {
	std::string ret = "[XLELib FF S_ItemComboError] " + error;
	return ret.c_str();
}

XLELib::FF::S_ItemCombo::S_ItemCombo() : Table() {
	
}

XLELib::FF::S_ItemCombo::S_ItemCombo(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_ItemCombo::~S_ItemCombo() {
	
}

