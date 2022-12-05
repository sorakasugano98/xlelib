#include "s_adventureroad.hpp"

XLELib::FF::S_AdventureRoadError::S_AdventureRoadError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_AdventureRoadError::what() const throw() {
	std::string ret = "[XLELib FF S_AdventureRoadError] " + error;
	return ret.c_str();
}

XLELib::FF::S_AdventureRoad::S_AdventureRoad() : Table() {
	
}

XLELib::FF::S_AdventureRoad::S_AdventureRoad(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_AdventureRoad::~S_AdventureRoad() {
	
}
