#include "s_monsterstep.hpp"

XLELib::FF::S_MonsterStepError::S_MonsterStepError(std::string msg) {
	error = "[XLELib FF S_MonsterStepError] " + msg;
}

const char* XLELib::FF::S_MonsterStepError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_MonsterStep::S_MonsterStep() : Conversion() {
	init_conversion();
}

XLELib::FF::S_MonsterStep::S_MonsterStep(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_MonsterStep::~S_MonsterStep() {
	
}

void XLELib::FF::S_MonsterStep::init_conversion() {
	class_pointer = this;
	conversions = {};
}
