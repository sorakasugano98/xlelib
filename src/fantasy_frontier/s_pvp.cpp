#include "s_pvp.hpp"

XLELib::FF::S_PVPError::S_PVPError(std::string msg) {
	error = "[XLELib FF S_PVPError] " + msg;
}

const char* XLELib::FF::S_PVPError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_PVP::S_PVP() : Conversion() {
	init_conversion();
}

XLELib::FF::S_PVP::S_PVP(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_PVP::~S_PVP() {
	
}

void XLELib::FF::S_PVP::init_conversion() {
	class_pointer = this;
	conversions = {};
}
