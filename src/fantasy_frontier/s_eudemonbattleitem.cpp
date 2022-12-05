#include "s_eudemonbattleitem.hpp"

XLELib::FF::S_EudemonBattleItemError::S_EudemonBattleItemError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_EudemonBattleItemError::what() const throw() {
	std::string ret = "[XLELib FF S_EudemonBattleItemError] " + error;
	return ret.c_str();
}

XLELib::FF::S_EudemonBattleItem::S_EudemonBattleItem() : Table() {
	
}

XLELib::FF::S_EudemonBattleItem::S_EudemonBattleItem(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_EudemonBattleItem::~S_EudemonBattleItem() {
	
}

