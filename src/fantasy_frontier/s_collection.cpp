#include "s_collection.hpp"

XLELib::FF::S_CollectionError::S_CollectionError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CollectionError::what() const throw() {
	std::string ret = "[XLELib FF S_CollectionError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Collection::S_Collection() : Table() {
	
}

XLELib::FF::S_Collection::S_Collection(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Collection::~S_Collection() {
	
}

