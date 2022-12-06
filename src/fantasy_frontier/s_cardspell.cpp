#include "s_cardspell.hpp"

XLELib::FF::S_CardSpellError::S_CardSpellError(std::string msg) {
	error = "[XLELib FF S_CardSpellError] " + msg;
}

const char* XLELib::FF::S_CardSpellError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CardSpell::S_CardSpell() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CardSpell::S_CardSpell(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CardSpell::~S_CardSpell() {
	
}

void XLELib::FF::S_CardSpell::init_conversion() {
	class_pointer = this;
	conversions = {};
}
