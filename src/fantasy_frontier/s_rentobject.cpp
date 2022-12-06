#include "s_rentobject.hpp"

XLELib::FF::S_RentObjectError::S_RentObjectError(std::string msg) {
	error = "[XLELib FF S_RentObjectError] " + msg;
}

const char* XLELib::FF::S_RentObjectError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_RentObject::S_RentObject() : Conversion() {
	init_conversion();
}

XLELib::FF::S_RentObject::S_RentObject(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_RentObject::~S_RentObject() {
	
}

void XLELib::FF::S_RentObject::init_conversion() {
	class_pointer = this;
	conversions = {};
}
