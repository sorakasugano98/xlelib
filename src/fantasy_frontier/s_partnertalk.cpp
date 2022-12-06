#include "s_partnertalk.hpp"

XLELib::FF::S_PartnerTalkError::S_PartnerTalkError(std::string msg) {
	error = "[XLELib FF S_PartnerTalkError] " + msg;
}

const char* XLELib::FF::S_PartnerTalkError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_PartnerTalk::S_PartnerTalk() : Conversion() {
	init_conversion();
}

XLELib::FF::S_PartnerTalk::S_PartnerTalk(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_PartnerTalk::~S_PartnerTalk() {
	
}

void XLELib::FF::S_PartnerTalk::init_conversion() {
	class_pointer = this;
	conversions = {};
}
