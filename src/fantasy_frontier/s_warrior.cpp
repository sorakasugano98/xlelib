#include "s_warrior.hpp"

XLELib::FF::S_WarriorError::S_WarriorError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_WarriorError::what() const throw() {
	std::string ret = "[XLELib FF S_WarriorError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Warrior::S_Warrior() : Table() {
	
}

XLELib::FF::S_Warrior::S_Warrior(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Warrior::~S_Warrior() {
	
}

