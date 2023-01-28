#include "s_enchant.hpp"

XLELib::FF::S_EnchantError::S_EnchantError(std::string msg) {
	error = "[XLELib FF S_EnchantError] " + msg;
}

const char* XLELib::FF::S_EnchantError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Enchant::S_Enchant() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Enchant::S_Enchant(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Enchant::~S_Enchant() {
	
}

void XLELib::FF::S_Enchant::init_conversion() {
	class_pointer = this;
	conversions = {};
}

void XLELib::FF::S_Enchant::remove_astrologer() {
	if(version != L"V.2" || length != 62) {
		throw S_EnchantError("Expected a table with version V.2|62 to remove Astrologer.");
	}
	/* Loop over all enchants. */
	for(std::map<unsigned long long, std::vector<std::wstring>>::iterator i = content.begin(); i != content.end(); i++) {
		for(int j = 0; j < 4; j++) {
			/* Check for class modifications */
			if(i->second[7 + j * 7] == L"2111" || i->second[7 + j * 7] == L"2112" || i->second[7 + j * 7] == L"2113" || i->second[7 + j * 7] == L"2114") {
				/* Move Astrologer buffs to Star Caller. */
				if(i->second[8 + j * 7] == L"20") {
					i->second[8 + j * 7] = L"17";
				}
				/* Remove Astrologer buffs. */
				if(i->second[10 + j * 7] == L"20") {
					i->second[10 + j * 7] = L"";
					i->second[11 + j * 7] = L"";
				}
				if(i->second[12 + j * 7] == L"20") {
					i->second[12 + j * 7] = L"";
					i->second[13 + j * 7] = L"";
				}
				continue;
			}
		}
	}
}
