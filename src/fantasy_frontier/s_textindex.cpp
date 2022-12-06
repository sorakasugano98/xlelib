#include "s_textindex.hpp"

XLELib::FF::S_TextIndexError::S_TextIndexError(std::string msg) {
	error = "[XLELib FF S_TextIndexError] " + msg;
}

const char* XLELib::FF::S_TextIndexError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_TextIndex::S_TextIndex() : Conversion() {
	init_conversion();
}

XLELib::FF::S_TextIndex::S_TextIndex(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_TextIndex::~S_TextIndex() {
	
}

void XLELib::FF::S_TextIndex::init_conversion() {
	class_pointer = this;
	conversions = {};
}
