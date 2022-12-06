#include "s_spellformula.hpp"

XLELib::FF::S_SpellFormulaError::S_SpellFormulaError(std::string msg) {
	error = "[XLELib FF S_SpellFormulaError] " + msg;
}

const char* XLELib::FF::S_SpellFormulaError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_SpellFormula::S_SpellFormula() : Conversion() {
	init_conversion();
}

XLELib::FF::S_SpellFormula::S_SpellFormula(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_SpellFormula::~S_SpellFormula() {
	
}

void XLELib::FF::S_SpellFormula::init_conversion() {
	class_pointer = this;
	conversions = {};
}
