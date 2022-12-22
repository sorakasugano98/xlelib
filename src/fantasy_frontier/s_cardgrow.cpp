#include "s_cardgrow.hpp"

XLELib::FF::S_CardGrowError::S_CardGrowError(std::string msg) {
	error = "[XLELib FF S_CardGrowError] " + msg;
}

const char* XLELib::FF::S_CardGrowError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CardGrow::S_CardGrow() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CardGrow::S_CardGrow(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CardGrow::~S_CardGrow() {
	
}

void XLELib::FF::S_CardGrow::init_conversion() {
	class_pointer = this;
	conversions = {
		{L"V.2", 41, L"V.1", 21, &convert_2_41_to_1_21}
	};
}

void XLELib::FF::S_CardGrow::convert_2_41_to_1_21() {
	for(std::map<unsigned long long, std::vector<std::wstring>>::iterator i = content.begin(); i != content.end(); i++) {
		i->second.erase(i->second.begin() + 10, i->second.begin() + 20);
	}
	length -= 10;
	this->resize_at_end(L"V.1", 21);
}
