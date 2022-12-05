#include "s_party.hpp"

XLELib::FF::S_PartyError::S_PartyError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_PartyError::what() const throw() {
	std::string ret = "[XLELib FF S_PartyError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Party::S_Party() : Table() {
	
}

XLELib::FF::S_Party::S_Party(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Party::~S_Party() {
	
}

