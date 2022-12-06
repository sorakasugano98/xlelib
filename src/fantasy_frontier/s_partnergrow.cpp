#include "s_partnergrow.hpp"

XLELib::FF::S_PartnerGrowError::S_PartnerGrowError(std::string msg) {
	error = "[XLELib FF S_PartnerGrowError] " + msg;
}

const char* XLELib::FF::S_PartnerGrowError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_PartnerGrow::S_PartnerGrow() : Conversion() {
	init_conversion();
}

XLELib::FF::S_PartnerGrow::S_PartnerGrow(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_PartnerGrow::~S_PartnerGrow() {
	
}

void XLELib::FF::S_PartnerGrow::init_conversion() {
	class_pointer = this;
	conversions = {};
}
