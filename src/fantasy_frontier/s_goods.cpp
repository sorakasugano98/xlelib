#include "s_goods.hpp"

XLELib::FF::S_GoodsError::S_GoodsError(std::string msg) {
	error = "[XLELib FF S_GoodsError] " + msg;
}

const char* XLELib::FF::S_GoodsError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Goods::S_Goods() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Goods::S_Goods(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Goods::~S_Goods() {
	
}

void XLELib::FF::S_Goods::init_conversion() {
	class_pointer = this;
	conversions = {};
}
