#include "s_title.hpp"

XLELib::FF::S_TitleError::S_TitleError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_TitleError::what() const throw() {
	std::string ret = "[XLELib FF S_TitleError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Title::S_Title() : Table() {
	
}

XLELib::FF::S_Title::S_Title(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Title::~S_Title() {
	
}

