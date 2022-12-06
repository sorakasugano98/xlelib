#include "s_missionlist.hpp"

XLELib::FF::S_MissionListError::S_MissionListError(std::string msg) {
	error = "[XLELib FF S_MissionListError] " + msg;
}

const char* XLELib::FF::S_MissionListError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_MissionList::S_MissionList() : Conversion() {
	init_conversion();
}

XLELib::FF::S_MissionList::S_MissionList(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_MissionList::~S_MissionList() {
	
}

void XLELib::FF::S_MissionList::init_conversion() {
	class_pointer = this;
	conversions = {};
}
