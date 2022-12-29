#include "s_collection.hpp"

XLELib::FF::S_CollectionError::S_CollectionError(std::string msg) {
	error = "[XLELib FF S_CollectionError] " + msg;
}

const char* XLELib::FF::S_CollectionError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Collection::S_Collection() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Collection::S_Collection(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Collection::~S_Collection() {
	
}

void XLELib::FF::S_Collection::init_conversion() {
	class_pointer = this;
	conversions = {
		{L"V.3", 7, L"V.2", 6, &convert_3_7_to_2_6}
	};
}

void XLELib::FF::S_Collection::convert_3_7_to_2_6() {
	/* Remove items from "Pet" and "Special" categories. */
	for(std::map<unsigned long long, std::vector<std::wstring>>::iterator i = content.begin(); i != content.end(); i++) {
		if(i->second[2] == L"8" || i->second[2] == L"9") {
			std::map<unsigned long long, std::vector<std::wstring>>::iterator k = i;
			k++;
			content.erase(i);
			k--;
			i = k;
		}
	}
	/* Remove the column for the collection points. */
	this->resize_at_end(L"V.2", 6);
}
