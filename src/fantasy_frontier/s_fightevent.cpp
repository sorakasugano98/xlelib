#include "s_fightevent.hpp"

XLELib::FF::S_FightEventError::S_FightEventError(std::string msg) {
	error = "[XLELib FF S_FightEventError] " + msg;
}

const char* XLELib::FF::S_FightEventError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_FightEvent::S_FightEvent() : Conversion() {
	init_conversion();
}

XLELib::FF::S_FightEvent::S_FightEvent(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_FightEvent::~S_FightEvent() {
	
}

void XLELib::FF::S_FightEvent::init_conversion() {
	class_pointer = this;
	conversions = {};
}
