#include "s_partner.hpp"

XLELib::FF::S_PartnerError::S_PartnerError(std::string msg) {
	error = "[XLELib FF S_PartnerError] " + msg;
}

const char* XLELib::FF::S_PartnerError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Partner::S_Partner() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Partner::S_Partner(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Partner::~S_Partner() {
	
}

void XLELib::FF::S_Partner::init_conversion() {
	class_pointer = this;
	conversions = {};
}
