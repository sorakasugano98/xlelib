#include "s_card.hpp"

XLELib::FF::S_CardError::S_CardError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CardError::what() const throw() {
	std::string ret = "[XLELib FF S_CardError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Card::S_Card() : Table() {
	
}

XLELib::FF::S_Card::S_Card(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Card::~S_Card() {
	
}
