#include "s_card.hpp"

XLELib::FF::S_CardError::S_CardError(std::string msg) {
	error = "[XLELib FF S_CardError] " + msg;
}

const char* XLELib::FF::S_CardError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Card::S_Card() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Card::S_Card(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Card::~S_Card() {
	
}

void XLELib::FF::S_Card::init_conversion() {
	class_pointer = this;
	conversions = {
		{L"V.2", 32, L"V.1", 31, &convert_2_32_to_1_31}
	};
}

void XLELib::FF::S_Card::convert_2_32_to_1_31() {
	/* Remove breakthrough title info. */
	this->resize_at_end(L"V.1", 31);
}