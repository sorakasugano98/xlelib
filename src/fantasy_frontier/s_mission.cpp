#include "s_mission.hpp"

XLELib::FF::S_MissionError::S_MissionError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_MissionError::what() const throw() {
	std::string ret = "[XLELib FF S_MissionError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Mission::S_Mission() : Table() {
	
}

XLELib::FF::S_Mission::S_Mission(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Mission::~S_Mission() {
	
}

