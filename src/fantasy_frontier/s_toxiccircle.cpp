#include "s_toxiccircle.hpp"

XLELib::FF::S_ToxicCircleError::S_ToxicCircleError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ToxicCircleError::what() const throw() {
	std::string ret = "[XLELib FF S_ToxicCircleError] " + error;
	return ret.c_str();
}

XLELib::FF::S_ToxicCircle::S_ToxicCircle() : Table() {
	
}

XLELib::FF::S_ToxicCircle::S_ToxicCircle(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_ToxicCircle::~S_ToxicCircle() {
	
}

