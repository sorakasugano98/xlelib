#include "s_spell.hpp"

XLELib::FF::S_SpellError::S_SpellError(std::string msg) {
	error = "[XLELib FF S_SpellError] " + msg;
}

const char* XLELib::FF::S_SpellError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Spell::S_Spell() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Spell::S_Spell(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Spell::~S_Spell() {
	
}

void XLELib::FF::S_Spell::init_conversion() {
	class_pointer = this;
	conversions = {};
}
