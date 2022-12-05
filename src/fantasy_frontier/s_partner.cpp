#include "s_partner.hpp"

XLELib::FF::S_PartnerError::S_PartnerError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_PartnerError::what() const throw() {
	std::string ret = "[XLELib FF S_PartnerError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Partner::S_Partner() : Table() {
	
}

XLELib::FF::S_Partner::S_Partner(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Partner::~S_Partner() {
	
}

