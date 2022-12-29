#include "s_biology.hpp"

XLELib::FF::S_BiologyError::S_BiologyError(std::string msg) {
	error = "[XLELib FF S_BiologyError] " + msg;
}

const char* XLELib::FF::S_BiologyError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Biology::S_Biology() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Biology::S_Biology(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Biology::~S_Biology() {
	
}

void XLELib::FF::S_Biology::init_conversion() {
	class_pointer = this;
	conversions = {
		{L"V.6", 65, L"V.5", 64, &convert_6_65_to_5_64},
		{L"V.7", 66, L"V.6", 65, &convert_7_66_to_6_65},
		{L"V.8", 67, L"V.7", 66, &convert_8_67_to_7_66},
		{L"V.9", 69, L"V.8", 67, &convert_9_69_to_8_67},
		{L"V.9", 69, L"V.10", 70, &convert_9_69_to_10_70},
		{L"V.10", 70, L"V.9", 69, &convert_10_70_to_9_69}
	};
}

void XLELib::FF::S_Biology::convert_6_65_to_5_64() {
	/* Remove the column for the bonding value. */
	this->resize_at_end(L"V.5", 64);
}

void XLELib::FF::S_Biology::convert_7_66_to_6_65() {
	/* Remove the column to hide/show NPCs for quests. */
	this->resize_at_end(L"V.6", 65);
}

void XLELib::FF::S_Biology::convert_8_67_to_7_66() {
	/* Remove bloodflash. */
	this->resize_at_end(L"V.7", 66);
}

void XLELib::FF::S_Biology::convert_9_69_to_8_67() {
	/* Remove blood armor. */
	this->resize_at_end(L"V.8", 67);
}

void XLELib::FF::S_Biology::convert_9_69_to_10_70() {
	/* Add empty blood bar column. */
	this->resize_at_end(L"V.10", 70);
}

void XLELib::FF::S_Biology::convert_10_70_to_9_69() {
	/* Remove blood bar info. */
	this->resize_at_end(L"V.9", 69);
}
