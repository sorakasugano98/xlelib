#include "s_monsterstep.hpp"

XLELib::FF::S_MonsterStepError::S_MonsterStepError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_MonsterStepError::what() const throw() {
	std::string ret = "[XLELib FF S_MonsterStepError] " + error;
	return ret.c_str();
}

XLELib::FF::S_MonsterStep::S_MonsterStep() : Table() {
	
}

XLELib::FF::S_MonsterStep::S_MonsterStep(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_MonsterStep::~S_MonsterStep() {
	
}

