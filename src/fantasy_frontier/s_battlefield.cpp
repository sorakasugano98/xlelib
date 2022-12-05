#include "s_battlefield.hpp"

XLELib::FF::S_BattlefieldError::S_BattlefieldError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_BattlefieldError::what() const throw() {
	std::string ret = "[XLELib FF S_BattlefieldError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Battlefield::S_Battlefield() : Table() {
	
}

XLELib::FF::S_Battlefield::S_Battlefield(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Battlefield::~S_Battlefield() {
	
}
