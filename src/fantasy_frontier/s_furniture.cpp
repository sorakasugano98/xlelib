#include "s_furniture.hpp"

XLELib::FF::S_FurnitureError::S_FurnitureError(std::string msg) {
	error = "[XLELib FF S_FurnitureError] " + msg;
}

const char* XLELib::FF::S_FurnitureError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Furniture::S_Furniture() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Furniture::S_Furniture(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Furniture::~S_Furniture() {
	
}

void XLELib::FF::S_Furniture::init_conversion() {
	class_pointer = this;
	conversions = {};
}
