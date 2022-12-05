#include "s_textindex.hpp"

XLELib::FF::S_TextIndexError::S_TextIndexError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_TextIndexError::what() const throw() {
	std::string ret = "[XLELib FF S_TextIndexError] " + error;
	return ret.c_str();
}

XLELib::FF::S_TextIndex::S_TextIndex() : Table() {
	
}

XLELib::FF::S_TextIndex::S_TextIndex(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_TextIndex::~S_TextIndex() {
	
}

