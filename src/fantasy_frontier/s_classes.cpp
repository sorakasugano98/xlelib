#include "s_classes.hpp"

XLELib::FF::S_ClassesError::S_ClassesError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ClassesError::what() const throw() {
	std::string ret = "[XLELib FF S_ClassesError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Classes::S_Classes() : Table() {
	
}

XLELib::FF::S_Classes::S_Classes(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Classes::~S_Classes() {
	
}

