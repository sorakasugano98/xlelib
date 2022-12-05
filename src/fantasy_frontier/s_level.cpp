#include "s_level.hpp"

XLELib::FF::S_LevelError::S_LevelError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_LevelError::what() const throw() {
	std::string ret = "[XLELib FF S_LevelError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Level::S_Level() : Table() {
	
}

XLELib::FF::S_Level::S_Level(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Level::~S_Level() {
	
}

