#include "s_recommendactivity.hpp"

XLELib::FF::S_RecommendActivityError::S_RecommendActivityError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_RecommendActivityError::what() const throw() {
	std::string ret = "[XLELib FF S_RecommendActivityError] " + error;
	return ret.c_str();
}

XLELib::FF::S_RecommendActivity::S_RecommendActivity() : Table() {
	
}

XLELib::FF::S_RecommendActivity::S_RecommendActivity(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_RecommendActivity::~S_RecommendActivity() {
	
}

