#include "s_eudemonbackground.hpp"

XLELib::FF::S_EudemonBackgroundError::S_EudemonBackgroundError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonBackgroundError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonBackgroundError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonBackground::S_EudemonBackground() : Table() {
	
}

XLELib::FF::S_EudemonBackground::S_EudemonBackground(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonBackground::~S_EudemonBackground() {
	
}

