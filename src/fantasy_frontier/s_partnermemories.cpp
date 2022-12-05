#include "s_partnermemories.hpp"

XLELib::FF::S_PartnerMemoriesError::S_PartnerMemoriesError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_PartnerMemoriesError::what() const throw() {
	std::string ret = "[XLELib FF S_PartnerMemoriesError] " + error;
	return ret.c_str();
}

XLELib::FF::S_PartnerMemories::S_PartnerMemories() : Table() {
	
}

XLELib::FF::S_PartnerMemories::S_PartnerMemories(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_PartnerMemories::~S_PartnerMemories() {
	
}

