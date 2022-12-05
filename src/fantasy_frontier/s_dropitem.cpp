#include "s_dropitem.hpp"

XLELib::FF::S_DropItemError::S_DropItemError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_DropItemError::what() const throw() {
	std::string ret = "[XLELib FF S_DropItemError] " + error;
	return ret.c_str();
}

XLELib::FF::S_DropItem::S_DropItem() : Table() {
	
}

XLELib::FF::S_DropItem::S_DropItem(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_DropItem::~S_DropItem() {
	
}

