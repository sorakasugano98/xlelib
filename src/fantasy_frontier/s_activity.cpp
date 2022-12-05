#include "s_activity.hpp"

XLELib::FF::S_ActivityError::S_ActivityError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ActivityError::what() const throw() {
	std::string ret = "[XLELib FF S_ActivityError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Activity::S_Activity() : Table() {
	
}

XLELib::FF::S_Activity::S_Activity(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Activity::~S_Activity() {
	
}
