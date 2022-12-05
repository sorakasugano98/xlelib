#include "s_coupleevent.hpp"

XLELib::FF::S_CoupleEventError::S_CoupleEventError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CoupleEventError::what() const throw() {
	std::string ret = "[XLELib FF S_CoupleEventError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CoupleEvent::S_CoupleEvent() : Table() {
	
}

XLELib::FF::S_CoupleEvent::S_CoupleEvent(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CoupleEvent::~S_CoupleEvent() {
	
}

