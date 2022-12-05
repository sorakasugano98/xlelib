#include "s_eudemonbattlebiology.hpp"

XLELib::FF::S_EudemonBattleBiologyError::S_EudemonBattleBiologyError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonBattleBiologyError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonBattleBiologyError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonBattleBiology::S_EudemonBattleBiology() : Table() {
	
}

XLELib::FF::S_EudemonBattleBiology::S_EudemonBattleBiology(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonBattleBiology::~S_EudemonBattleBiology() {
	
}

