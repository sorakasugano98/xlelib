#include "s_mage.hpp"

XLELib::FF::S_MageError::S_MageError(std::string msg) {
	error = "[XLELib FF S_MageError] " + msg;
}

const char* XLELib::FF::S_MageError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Mage::S_Mage() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Mage::S_Mage(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Mage::~S_Mage() {
	
}

void XLELib::FF::S_Mage::init_conversion() {
	class_pointer = this;
	conversions = {};
}
