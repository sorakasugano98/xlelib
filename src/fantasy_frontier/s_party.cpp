#include "s_party.hpp"

XLELib::FF::S_PartyError::S_PartyError(std::string msg) {
	error = "[XLELib FF S_PartyError] " + msg;
}

const char* XLELib::FF::S_PartyError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Party::S_Party() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Party::S_Party(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Party::~S_Party() {
	
}

void XLELib::FF::S_Party::init_conversion() {
	class_pointer = this;
	conversions = {};
}
