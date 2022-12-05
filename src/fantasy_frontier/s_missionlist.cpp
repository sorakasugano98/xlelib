#include "s_missionlist.hpp"

XLELib::FF::S_MissionListError::S_MissionListError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_MissionListError::what() const throw() {
	std::string ret = "[XLELib FF S_MissionListError] " + error;
	return ret.c_str();
}

XLELib::FF::S_MissionList::S_MissionList() : Table() {
	
}

XLELib::FF::S_MissionList::S_MissionList(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_MissionList::~S_MissionList() {
	
}

