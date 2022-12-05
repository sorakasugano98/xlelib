#include "s_statedependence.hpp"

XLELib::FF::S_StateDependenceError::S_StateDependenceError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_StateDependenceError::what() const throw() {
	std::string ret = "[XLELib FF S_StateDependenceError] " + error;
	return ret.c_str();
}

XLELib::FF::S_StateDependence::S_StateDependence() : Table() {
	
}

XLELib::FF::S_StateDependence::S_StateDependence(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_StateDependence::~S_StateDependence() {
	
}

