#include "s_spell.hpp"

XLELib::FF::S_SpellError::S_SpellError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_SpellError::what() const throw() {
	std::string ret = "[XLELib FF S_SpellError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Spell::S_Spell() : Table() {
	
}

XLELib::FF::S_Spell::S_Spell(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Spell::~S_Spell() {
	
}

