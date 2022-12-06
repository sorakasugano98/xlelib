#include "s_furnituredisplay.hpp"

XLELib::FF::S_FurnitureDisplayError::S_FurnitureDisplayError(std::string msg) {
	error = "[XLELib FF S_FurnitureDisplayError] " + msg;
}

const char* XLELib::FF::S_FurnitureDisplayError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_FurnitureDisplay::S_FurnitureDisplay() : Conversion() {
	init_conversion();
}

XLELib::FF::S_FurnitureDisplay::S_FurnitureDisplay(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_FurnitureDisplay::~S_FurnitureDisplay() {
	
}

void XLELib::FF::S_FurnitureDisplay::init_conversion() {
	class_pointer = this;
	conversions = {};
}
