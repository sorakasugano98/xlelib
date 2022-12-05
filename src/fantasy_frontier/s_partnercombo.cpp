#include "s_partnercombo.hpp"

XLELib::FF::S_PartnerComboError::S_PartnerComboError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_PartnerComboError::what() const throw() {
	std::string ret = "[XLELib FF S_PartnerComboError] " + error;
	return ret.c_str();
}

XLELib::FF::S_PartnerCombo::S_PartnerCombo() : Table() {
	
}

XLELib::FF::S_PartnerCombo::S_PartnerCombo(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_PartnerCombo::~S_PartnerCombo() {
	
}

