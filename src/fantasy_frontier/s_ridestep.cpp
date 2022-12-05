#include "s_ridestep.hpp"

XLELib::FF::S_RideStepError::S_RideStepError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_RideStepError::what() const throw() {
	std::string ret = "[XLELib FF S_RideStepError] " + error;
	return ret.c_str();
}

XLELib::FF::S_RideStep::S_RideStep() : Table() {
	
}

XLELib::FF::S_RideStep::S_RideStep(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_RideStep::~S_RideStep() {
	
}

