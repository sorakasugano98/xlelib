#include "s_ability.hpp"

XLELib::FF::S_AbilityError::S_AbilityError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_AbilityError::what() const throw() {
	std::string ret = "[XLELib FF S_AbilityError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Ability::S_Ability() : Table() {
	
}

XLELib::FF::S_Ability::S_Ability(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Ability::~S_Ability() {
	
}
