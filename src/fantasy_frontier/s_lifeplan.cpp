#include "s_lifeplan.hpp"

XLELib::FF::S_LifePlanError::S_LifePlanError(std::string msg) {
	error = "[XLELib FF S_LifePlanError] " + msg;
}

const char* XLELib::FF::S_LifePlanError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_LifePlan::S_LifePlan() : Conversion() {
	init_conversion();
}

XLELib::FF::S_LifePlan::S_LifePlan(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_LifePlan::~S_LifePlan() {
	
}

void XLELib::FF::S_LifePlan::init_conversion() {
	class_pointer = this;
	conversions = {};
}
