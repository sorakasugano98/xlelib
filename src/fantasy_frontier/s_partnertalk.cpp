#include "s_partnertalk.hpp"

XLELib::FF::S_PartnerTalkError::S_PartnerTalkError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_PartnerTalkError::what() const throw() {
	std::string ret = "[XLELib FF S_PartnerTalkError] " + error;
	return ret.c_str();
}

XLELib::FF::S_PartnerTalk::S_PartnerTalk() : Table() {
	
}

XLELib::FF::S_PartnerTalk::S_PartnerTalk(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_PartnerTalk::~S_PartnerTalk() {
	
}

