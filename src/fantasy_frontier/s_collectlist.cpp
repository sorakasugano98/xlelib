#include "s_collectlist.hpp"

XLELib::FF::S_CollectListError::S_CollectListError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CollectListError::what() const throw() {
	std::string ret = "[XLELib FF S_CollectListError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CollectList::S_CollectList() : Table() {
	
}

XLELib::FF::S_CollectList::S_CollectList(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CollectList::~S_CollectList() {
	
}

