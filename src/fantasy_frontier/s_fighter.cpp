#include "s_fighter.hpp"

XLELib::FF::S_FighterError::S_FighterError(std::string msg) {
	error = "[XLELib FF S_FighterError] " + msg;
}

const char* XLELib::FF::S_FighterError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Fighter::S_Fighter() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Fighter::S_Fighter(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Fighter::~S_Fighter() {
	
}

void XLELib::FF::S_Fighter::init_conversion() {
	class_pointer = this;
	conversions = {};
}
