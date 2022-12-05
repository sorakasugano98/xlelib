#include "s_pvp.hpp"

XLELib::FF::S_PVPError::S_PVPError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_PVPError::what() const throw() {
	std::string ret = "[XLELib FF S_PVPError] " + error;
	return ret.c_str();
}

XLELib::FF::S_PVP::S_PVP() : Table() {
	
}

XLELib::FF::S_PVP::S_PVP(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_PVP::~S_PVP() {
	
}

