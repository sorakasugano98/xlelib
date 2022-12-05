#include "s_fighter.hpp"

XLELib::FF::S_FighterError::S_FighterError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_FighterError::what() const throw() {
	std::string ret = "[XLELib FF S_FighterError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Fighter::S_Fighter() : Table() {
	
}

XLELib::FF::S_Fighter::S_Fighter(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Fighter::~S_Fighter() {
	
}

