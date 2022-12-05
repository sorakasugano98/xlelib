#include "s_furniture.hpp"

XLELib::FF::S_FurnitureError::S_FurnitureError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_FurnitureError::what() const throw() {
	std::string ret = "[XLELib FF S_FurnitureError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Furniture::S_Furniture() : Table() {
	
}

XLELib::FF::S_Furniture::S_Furniture(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Furniture::~S_Furniture() {
	
}

