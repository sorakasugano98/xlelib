#include "s_eudemonbattlemission.hpp"

XLELib::FF::S_EudemonBattleMissionError::S_EudemonBattleMissionError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonBattleMissionError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonBattleMissionError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonBattleMission::S_EudemonBattleMission() : Table() {
	
}

XLELib::FF::S_EudemonBattleMission::S_EudemonBattleMission(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonBattleMission::~S_EudemonBattleMission() {
	
}

