#include "s_races.hpp"

XLELib::FF::S_RacesError::S_RacesError(std::string msg) {
	error = "[XLELib FF S_RacesError] " + msg;
}

const char* XLELib::FF::S_RacesError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Races::S_Races() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Races::S_Races(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Races::~S_Races() {
	
}

void XLELib::FF::S_Races::init_conversion() {
	class_pointer = this;
	conversions = {};
}
