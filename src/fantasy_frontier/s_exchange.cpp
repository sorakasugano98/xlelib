#include "s_exchange.hpp"

XLELib::FF::S_ExchangeError::S_ExchangeError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_ExchangeError::what() const throw() {
	std::string ret = "[XLELib FF S_ExchangeError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Exchange::S_Exchange() : Table() {
	
}

XLELib::FF::S_Exchange::S_Exchange(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Exchange::~S_Exchange() {
	
}

