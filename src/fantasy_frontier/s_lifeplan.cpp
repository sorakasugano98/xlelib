#include "s_lifeplan.hpp"

XLELib::FF::S_LifePlanError::S_LifePlanError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_LifePlanError::what() const throw() {
	std::string ret = "[XLELib FF S_LifePlanError] " + error;
	return ret.c_str();
}

XLELib::FF::S_LifePlan::S_LifePlan() : Table() {
	
}

XLELib::FF::S_LifePlan::S_LifePlan(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_LifePlan::~S_LifePlan() {
	
}

