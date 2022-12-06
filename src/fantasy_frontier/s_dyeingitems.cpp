#include "s_dyeingitems.hpp"

XLELib::FF::S_DyeingItemsError::S_DyeingItemsError(std::string msg) {
	error = "[XLELib FF S_DyeingItemsError] " + msg;
}

const char* XLELib::FF::S_DyeingItemsError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_DyeingItems::S_DyeingItems() : Conversion() {
	init_conversion();
}

XLELib::FF::S_DyeingItems::S_DyeingItems(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_DyeingItems::~S_DyeingItems() {
	
}

void XLELib::FF::S_DyeingItems::init_conversion() {
	class_pointer = this;
	conversions = {};
}
