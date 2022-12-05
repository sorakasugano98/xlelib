#include "s_recommendevents.hpp"

XLELib::FF::S_RecommendEventsError::S_RecommendEventsError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_RecommendEventsError::what() const throw() {
	std::string ret = "[XLELib FF S_RecommendEventsError] " + error;
	return ret.c_str();
}

XLELib::FF::S_RecommendEvents::S_RecommendEvents() : Table() {
	
}

XLELib::FF::S_RecommendEvents::S_RecommendEvents(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_RecommendEvents::~S_RecommendEvents() {
	
}

