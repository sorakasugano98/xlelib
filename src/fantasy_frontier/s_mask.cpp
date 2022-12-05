#include "s_mask.hpp"

XLELib::FF::S_MaskError::S_MaskError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_MaskError::what() const throw() {
	std::string ret = "[XLELib FF S_MaskError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Mask::S_Mask() : Table() {
	
}

XLELib::FF::S_Mask::S_Mask(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Mask::~S_Mask() {
	
}

