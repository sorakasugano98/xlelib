#include "s_questions.hpp"

XLELib::FF::S_QuestionsError::S_QuestionsError(std::string msg) {
	error = "[XLELib FF S_QuestionsError] " + msg;
}

const char* XLELib::FF::S_QuestionsError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Questions::S_Questions() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Questions::S_Questions(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Questions::~S_Questions() {
	
}

void XLELib::FF::S_Questions::init_conversion() {
	class_pointer = this;
	conversions = {};
}
