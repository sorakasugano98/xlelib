#include "s_exchange.hpp"

XLELib::FF::S_ExchangeError::S_ExchangeError(std::string msg) {
	error = "[XLELib FF S_ExchangeError] " + msg;
}

const char* XLELib::FF::S_ExchangeError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Exchange::S_Exchange() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Exchange::S_Exchange(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Exchange::~S_Exchange() {
	
}

void XLELib::FF::S_Exchange::init_conversion() {
	class_pointer = this;
	conversions = {};
}
