#include "s_schedule.hpp"

XLELib::FF::S_ScheduleError::S_ScheduleError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ScheduleError::what() const throw() {
	std::string ret = "[XLELib FF S_ScheduleError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Schedule::S_Schedule() : Table() {
	
}

XLELib::FF::S_Schedule::S_Schedule(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Schedule::~S_Schedule() {
	
}

