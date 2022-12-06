#include "s_produce.hpp"

XLELib::FF::S_ProduceError::S_ProduceError(std::string msg) {
	error = "[XLELib FF S_ProduceError] " + msg;
}

const char* XLELib::FF::S_ProduceError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Produce::S_Produce() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Produce::S_Produce(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Produce::~S_Produce() {
	
}

void XLELib::FF::S_Produce::init_conversion() {
	class_pointer = this;
	conversions = {};
}
