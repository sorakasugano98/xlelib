#include "s_schedule.hpp"

XLELib::FF::S_ScheduleError::S_ScheduleError(std::string msg) {
	error = "[XLELib FF S_ScheduleError] " + msg;
}

const char* XLELib::FF::S_ScheduleError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Schedule::S_Schedule() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Schedule::S_Schedule(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Schedule::~S_Schedule() {
	
}

void XLELib::FF::S_Schedule::init_conversion() {
	class_pointer = this;
	conversions = {};
}
