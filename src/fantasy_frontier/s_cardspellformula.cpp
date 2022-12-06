#include "s_cardspellformula.hpp"

XLELib::FF::S_CardSpellFormulaError::S_CardSpellFormulaError(std::string msg) {
	error = "[XLELib FF S_CardSpellFormulaError] " + msg;
}

const char* XLELib::FF::S_CardSpellFormulaError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CardSpellFormula::S_CardSpellFormula() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CardSpellFormula::S_CardSpellFormula(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CardSpellFormula::~S_CardSpellFormula() {
	
}

void XLELib::FF::S_CardSpellFormula::init_conversion() {
	class_pointer = this;
	conversions = {};
}
