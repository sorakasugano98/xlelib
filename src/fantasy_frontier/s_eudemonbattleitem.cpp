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
	conversions = {};
}
