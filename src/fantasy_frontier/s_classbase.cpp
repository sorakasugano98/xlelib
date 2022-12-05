#include "s_classbase.hpp"

XLELib::FF::S_ClassBaseError::S_ClassBaseError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ClassBaseError::what() const throw() {
	std::string ret = "[XLELib FF S_ClassBaseError] " + error;
	return ret.c_str();
}

XLELib::FF::S_ClassBase::S_ClassBase() : Table() {
	
}

XLELib::FF::S_ClassBase::S_ClassBase(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_ClassBase::~S_ClassBase() {
	
}

