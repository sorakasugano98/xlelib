#include "s_item.hpp"

XLELib::FF::S_ItemError::S_ItemError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ItemError::what() const throw() {
	std::string ret = "[XLELib FF S_ItemError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Item::S_Item() : Table() {
	
}

XLELib::FF::S_Item::S_Item(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Item::~S_Item() {
	
}

