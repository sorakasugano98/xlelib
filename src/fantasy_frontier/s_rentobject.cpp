#include "s_rentobject.hpp"

XLELib::FF::S_RentObjectError::S_RentObjectError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_RentObjectError::what() const throw() {
	std::string ret = "[XLELib FF S_RentObjectError] " + error;
	return ret.c_str();
}

XLELib::FF::S_RentObject::S_RentObject() : Table() {
	
}

XLELib::FF::S_RentObject::S_RentObject(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_RentObject::~S_RentObject() {
	
}

