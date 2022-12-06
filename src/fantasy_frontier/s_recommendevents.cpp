#include "s_recommendevents.hpp"

XLELib::FF::S_RecommendEventsError::S_RecommendEventsError(std::string msg) {
	error = "[XLELib FF S_RecommendEventsError] " + msg;
}

const char* XLELib::FF::S_RecommendEventsError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_RecommendEvents::S_RecommendEvents() : Conversion() {
	init_conversion();
}

XLELib::FF::S_RecommendEvents::S_RecommendEvents(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_RecommendEvents::~S_RecommendEvents() {
	
}

void XLELib::FF::S_RecommendEvents::init_conversion() {
	class_pointer = this;
	conversions = {};
}
