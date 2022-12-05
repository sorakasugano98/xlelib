#include "s_races.hpp"

XLELib::FF::S_RacesError::S_RacesError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_RacesError::what() const throw() {
	std::string ret = "[XLELib FF S_RacesError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Races::S_Races() : Table() {
	
}

XLELib::FF::S_Races::S_Races(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Races::~S_Races() {
	
}

