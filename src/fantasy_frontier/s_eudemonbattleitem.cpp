#include "s_eudemonbattleitem.hpp"

XLELib::FF::S_EudemonBattleItemError::S_EudemonBattleItemError(std::string msg) {
	error = "[XLELib FF S_EudemonBattleItemError] " + msg;
}

const char* XLELib::FF::S_EudemonBattleItemError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_EudemonBattleItem::S_EudemonBattleItem() : Conversion() {
	init_conversion();
}

XLELib::FF::S_EudemonBattleItem::S_EudemonBattleItem(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_EudemonBattleItem::~S_EudemonBattleItem() {
	
}

void XLELib::FF::S_EudemonBattleItem::init_conversion() {
	class_pointer = this;
	conversions = {
		{L"V.4", 13, L"V.3", 9, &convert_4_13_to_3_9}
	};
}

void XLELib::FF::S_EudemonBattleItem::convert_4_13_to_3_9() {
	/* Remove the column for the gaia chronicle fortification buffs for level 25-40. */
	this->resize_at_end(L"V.3", 9);
}
