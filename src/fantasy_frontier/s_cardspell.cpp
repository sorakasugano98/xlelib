#include "s_cardspell.hpp"

XLELib::FF::S_CardSpellError::S_CardSpellError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CardSpellError::what() const throw() {
	std::string ret = "[XLELib FF S_CardSpellError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CardSpell::S_CardSpell() : Table() {
	
}

XLELib::FF::S_CardSpell::S_CardSpell(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CardSpell::~S_CardSpell() {
	
}
