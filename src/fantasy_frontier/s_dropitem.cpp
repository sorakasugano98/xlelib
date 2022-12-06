#include "s_dropitem.hpp"

XLELib::FF::S_DropItemError::S_DropItemError(std::string msg) {
	error = "[XLELib FF S_DropItemError] " + msg;
}

const char* XLELib::FF::S_DropItemError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_DropItem::S_DropItem() : Conversion() {
	init_conversion();
}

XLELib::FF::S_DropItem::S_DropItem(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_DropItem::~S_DropItem() {
	
}

void XLELib::FF::S_DropItem::init_conversion() {
	class_pointer = this;
	conversions = {};
}
