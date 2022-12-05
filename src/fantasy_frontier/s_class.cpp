#include "s_class.hpp"

XLELib::FF::S_ClassError::S_ClassError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ClassError::what() const throw() {
	std::string ret = "[XLELib FF S_ClassError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Class::S_Class() : Table() {
	
}

XLELib::FF::S_Class::S_Class(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Class::~S_Class() {
	
}

