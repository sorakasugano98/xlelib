#include "s_fightevent.hpp"

XLELib::FF::S_FightEventError::S_FightEventError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_FightEventError::what() const throw() {
	std::string ret = "[XLELib FF S_FightEventError] " + error;
	return ret.c_str();
}

XLELib::FF::S_FightEvent::S_FightEvent() : Table() {
	
}

XLELib::FF::S_FightEvent::S_FightEvent(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_FightEvent::~S_FightEvent() {
	
}

