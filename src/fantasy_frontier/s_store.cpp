#include "s_store.hpp"

XLELib::FF::S_StoreError::S_StoreError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_StoreError::what() const throw() {
	std::string ret = "[XLELib FF S_StoreError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Store::S_Store() : Table() {
	
}

XLELib::FF::S_Store::S_Store(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Store::~S_Store() {
	
}

