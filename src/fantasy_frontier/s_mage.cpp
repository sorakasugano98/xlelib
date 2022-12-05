#include "s_mage.hpp"

XLELib::FF::S_MageError::S_MageError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_MageError::what() const throw() {
	std::string ret = "[XLELib FF S_MageError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Mage::S_Mage() : Table() {
	
}

XLELib::FF::S_Mage::S_Mage(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Mage::~S_Mage() {
	
}

