#include "s_item.hpp"

XLELib::FF::S_ItemError::S_ItemError(std::string msg) {
	error = "[XLELib FF S_ItemError] " + msg;
}

const char* XLELib::FF::S_ItemError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Item::S_Item() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Item::S_Item(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Item::~S_Item() {
	
}

void XLELib::FF::S_Item::init_conversion() {
	class_pointer = this;
	conversions = {};
}
