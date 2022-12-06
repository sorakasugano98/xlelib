#include "s_itemmall.hpp"

XLELib::FF::S_ItemMallError::S_ItemMallError(std::string msg) {
	error = "[XLELib FF S_ItemMallError] " + msg;
}

const char* XLELib::FF::S_ItemMallError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_ItemMall::S_ItemMall() : Conversion() {
	init_conversion();
}

XLELib::FF::S_ItemMall::S_ItemMall(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_ItemMall::~S_ItemMall() {
	
}

void XLELib::FF::S_ItemMall::init_conversion() {
	class_pointer = this;
	conversions = {};
}
