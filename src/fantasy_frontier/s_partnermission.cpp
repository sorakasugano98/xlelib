#include "s_partnermission.hpp"

XLELib::FF::S_PartnerMissionError::S_PartnerMissionError(std::string msg) {
	error = "[XLELib FF S_PartnerMissionError] " + msg;
}

const char* XLELib::FF::S_PartnerMissionError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_PartnerMission::S_PartnerMission() : Conversion() {
	init_conversion();
}

XLELib::FF::S_PartnerMission::S_PartnerMission(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_PartnerMission::~S_PartnerMission() {
	
}

void XLELib::FF::S_PartnerMission::init_conversion() {
	class_pointer = this;
	conversions = {
		{L"V.3", 20, L"V.2", 19, &convert_3_20_to_2_19}
	};
}

void XLELib::FF::S_PartnerMission::convert_3_20_to_2_19() {
	/* Remove Eidolon Wishing Coin column. */
	this->resize_at_end(L"V.2", 19);
}
