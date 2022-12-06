#include "s_store.hpp"

XLELib::FF::S_StoreError::S_StoreError(std::string msg) {
	error = "[XLELib FF S_StoreError] " + msg;
}

const char* XLELib::FF::S_StoreError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Store::S_Store() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Store::S_Store(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Store::~S_Store() {
	
}

void XLELib::FF::S_Store::init_conversion() {
	class_pointer = this;
	conversions = {};
}
