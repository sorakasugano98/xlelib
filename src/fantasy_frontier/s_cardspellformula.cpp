#include "s_cardspellformula.hpp"

XLELib::FF::S_CardSpellFormulaError::S_CardSpellFormulaError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CardSpellFormulaError::what() const throw() {
	std::string ret = "[XLELib FF S_CardSpellFormulaError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CardSpellFormula::S_CardSpellFormula() : Table() {
	
}

XLELib::FF::S_CardSpellFormula::S_CardSpellFormula(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CardSpellFormula::~S_CardSpellFormula() {
	
}
