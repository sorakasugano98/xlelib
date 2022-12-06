#include "s_title.hpp"

XLELib::FF::S_TitleError::S_TitleError(std::string msg) {
	error = "[XLELib FF S_TitleError] " + msg;
}

const char* XLELib::FF::S_TitleError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Title::S_Title() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Title::S_Title(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Title::~S_Title() {
	
}

void XLELib::FF::S_Title::init_conversion() {
	class_pointer = this;
	conversions = {};
}
