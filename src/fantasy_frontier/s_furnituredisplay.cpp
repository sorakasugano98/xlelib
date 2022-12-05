#include "s_furnituredisplay.hpp"

XLELib::FF::S_FurnitureDisplayError::S_FurnitureDisplayError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_FurnitureDisplayError::what() const throw() {
	std::string ret = "[XLELib FF S_FurnitureDisplayError] " + error;
	return ret.c_str();
}

XLELib::FF::S_FurnitureDisplay::S_FurnitureDisplay() : Table() {
	
}

XLELib::FF::S_FurnitureDisplay::S_FurnitureDisplay(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_FurnitureDisplay::~S_FurnitureDisplay() {
	
}

