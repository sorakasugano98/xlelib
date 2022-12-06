#include "s_collectlist.hpp"

XLELib::FF::S_CollectListError::S_CollectListError(std::string msg) {
	error = "[XLELib FF S_CollectListError] " + msg;
}

const char* XLELib::FF::S_CollectListError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CollectList::S_CollectList() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CollectList::S_CollectList(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CollectList::~S_CollectList() {
	
}

void XLELib::FF::S_CollectList::init_conversion() {
	class_pointer = this;
	conversions = {};
}
