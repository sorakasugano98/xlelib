#include "s_partnermission.hpp"

XLELib::FF::S_PartnerMissionError::S_PartnerMissionError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_PartnerMissionError::what() const throw() {
	std::string ret = "[XLELib FF S_PartnerMissionError] " + error;
	return ret.c_str();
}

XLELib::FF::S_PartnerMission::S_PartnerMission() : Table() {
	
}

XLELib::FF::S_PartnerMission::S_PartnerMission(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_PartnerMission::~S_PartnerMission() {
	
}

