#include "s_partnergrow.hpp"

XLELib::FF::S_PartnerGrowError::S_PartnerGrowError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_PartnerGrowError::what() const throw() {
	std::string ret = "[XLELib FF S_PartnerGrowError] " + error;
	return ret.c_str();
}

XLELib::FF::S_PartnerGrow::S_PartnerGrow() : Table() {
	
}

XLELib::FF::S_PartnerGrow::S_PartnerGrow(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_PartnerGrow::~S_PartnerGrow() {
	
}

