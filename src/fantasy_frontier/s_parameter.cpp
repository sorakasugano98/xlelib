#include "s_parameter.hpp"

XLELib::FF::S_ParameterError::S_ParameterError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ParameterError::what() const throw() {
	std::string ret = "[XLELib FF S_ParameterError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Parameter::S_Parameter() : Table() {
	
}

XLELib::FF::S_Parameter::S_Parameter(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Parameter::~S_Parameter() {
	
}

