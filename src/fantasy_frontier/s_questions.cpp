#include "s_questions.hpp"

XLELib::FF::S_QuestionsError::S_QuestionsError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_QuestionsError::what() const throw() {
	std::string ret = "[XLELib FF S_QuestionsError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Questions::S_Questions() : Table() {
	
}

XLELib::FF::S_Questions::S_Questions(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Questions::~S_Questions() {
	
}

