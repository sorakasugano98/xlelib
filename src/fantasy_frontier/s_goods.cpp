#include "s_goods.hpp"

XLELib::FF::S_GoodsError::S_GoodsError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_GoodsError::what() const throw() {
	std::string ret = "[XLELib FF S_GoodsError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Goods::S_Goods() : Table() {
	
}

XLELib::FF::S_Goods::S_Goods(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Goods::~S_Goods() {
	
}

