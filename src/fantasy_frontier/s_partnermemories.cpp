#include "s_partnermemories.hpp"

XLELib::FF::S_PartnerMemoriesError::S_PartnerMemoriesError(std::string msg) {
	error = "[XLELib FF S_PartnerMemoriesError] " + msg;
}

const char* XLELib::FF::S_PartnerMemoriesError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_PartnerMemories::S_PartnerMemories() : Conversion() {
	init_conversion();
}

XLELib::FF::S_PartnerMemories::S_PartnerMemories(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_PartnerMemories::~S_PartnerMemories() {
	
}

void XLELib::FF::S_PartnerMemories::init_conversion() {
	class_pointer = this;
	conversions = {};
}
