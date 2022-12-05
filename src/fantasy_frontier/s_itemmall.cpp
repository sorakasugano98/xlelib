#include "s_itemmall.hpp"

XLELib::FF::S_ItemMallError::S_ItemMallError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ItemMallError::what() const throw() {
	std::string ret = "[XLELib FF S_ItemMallError] " + error;
	return ret.c_str();
}

XLELib::FF::S_ItemMall::S_ItemMall() : Table() {
	
}

XLELib::FF::S_ItemMall::S_ItemMall(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_ItemMall::~S_ItemMall() {
	
}

