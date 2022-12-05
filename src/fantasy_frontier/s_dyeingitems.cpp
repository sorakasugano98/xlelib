#include "s_dyeingitems.hpp"

XLELib::FF::S_DyeingItemsError::S_DyeingItemsError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_DyeingItemsError::what() const throw() {
	std::string ret = "[XLELib FF S_DyeingItemsError] " + error;
	return ret.c_str();
}

XLELib::FF::S_DyeingItems::S_DyeingItems() : Table() {
	
}

XLELib::FF::S_DyeingItems::S_DyeingItems(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_DyeingItems::~S_DyeingItems() {
	
}

