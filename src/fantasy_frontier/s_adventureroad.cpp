#include "s_adventureroad.hpp"

XLELib::FF::S_AdventureRoadError::S_AdventureRoadError(std::string msg) {
	error = "[XLELib FF S_AdventureRoadError] " + msg;
}

const char* XLELib::FF::S_AdventureRoadError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_AdventureRoad::S_AdventureRoad() : Conversion() {
	init_conversion();
}

XLELib::FF::S_AdventureRoad::S_AdventureRoad(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_AdventureRoad::~S_AdventureRoad() {
	
}

void XLELib::FF::S_AdventureRoad::init_conversion() {
	class_pointer = this;
	conversions = {};
}
