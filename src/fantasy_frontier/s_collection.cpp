#include "s_collection.hpp"

XLELib::FF::S_CollectionError::S_CollectionError(std::string msg) {
	error = "[XLELib FF S_CollectionError] " + msg;
}

const char* XLELib::FF::S_CollectionError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Collection::S_Collection() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Collection::S_Collection(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Collection::~S_Collection() {
	
}

void XLELib::FF::S_Collection::init_conversion() {
	class_pointer = this;
	conversions = {};
}
