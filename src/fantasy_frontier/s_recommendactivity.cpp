#include "s_recommendactivity.hpp"

XLELib::FF::S_RecommendActivityError::S_RecommendActivityError(std::string msg) {
	error = "[XLELib FF S_RecommendActivityError] " + msg;
}

const char* XLELib::FF::S_RecommendActivityError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_RecommendActivity::S_RecommendActivity() : Conversion() {
	init_conversion();
}

XLELib::FF::S_RecommendActivity::S_RecommendActivity(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_RecommendActivity::~S_RecommendActivity() {
	
}

void XLELib::FF::S_RecommendActivity::init_conversion() {
	class_pointer = this;
	conversions = {};
}
