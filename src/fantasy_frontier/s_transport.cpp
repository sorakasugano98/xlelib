#include "s_transport.hpp"

XLELib::FF::S_TransportError::S_TransportError(std::string msg) {
	error = "[XLELib FF S_TransportError] " + msg;
}

const char* XLELib::FF::S_TransportError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Transport::S_Transport() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Transport::S_Transport(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Transport::~S_Transport() {
	
}

void XLELib::FF::S_Transport::init_conversion() {
	class_pointer = this;
	conversions = {};
}
