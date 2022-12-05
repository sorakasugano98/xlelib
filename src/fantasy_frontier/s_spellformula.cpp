#include "s_spellformula.hpp"

XLELib::FF::S_SpellFormulaError::S_SpellFormulaError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_SpellFormulaError::what() const throw() {
	std::string ret = "[XLELib FF S_SpellFormulaError] " + error;
	return ret.c_str();
}

XLELib::FF::S_SpellFormula::S_SpellFormula() : Table() {
	
}

XLELib::FF::S_SpellFormula::S_SpellFormula(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_SpellFormula::~S_SpellFormula() {
	
}

