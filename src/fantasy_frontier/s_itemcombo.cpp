#include "s_itemcombo.hpp"

XLELib::FF::S_ItemComboError::S_ItemComboError(std::string msg) {
	error = "[XLELib FF S_ItemComboError] " + msg;
}

const char* XLELib::FF::S_ItemComboError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_ItemCombo::S_ItemCombo() : Conversion() {
	init_conversion();
}

XLELib::FF::S_ItemCombo::S_ItemCombo(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_ItemCombo::~S_ItemCombo() {
	
}

void XLELib::FF::S_ItemCombo::init_conversion() {
	class_pointer = this;
	conversions = {};
}
