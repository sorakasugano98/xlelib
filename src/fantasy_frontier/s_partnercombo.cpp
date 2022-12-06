#include "s_partnercombo.hpp"

XLELib::FF::S_PartnerComboError::S_PartnerComboError(std::string msg) {
	error = "[XLELib FF S_PartnerComboError] " + msg;
}

const char* XLELib::FF::S_PartnerComboError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_PartnerCombo::S_PartnerCombo() : Conversion() {
	init_conversion();
}

XLELib::FF::S_PartnerCombo::S_PartnerCombo(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_PartnerCombo::~S_PartnerCombo() {
	
}

void XLELib::FF::S_PartnerCombo::init_conversion() {
	class_pointer = this;
	conversions = {};
}
