#include "s_biology.hpp"

XLELib::FF::S_BiologyError::S_BiologyError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_BiologyError::what() const throw() {
	std::string ret = "[XLELib FF S_BiologyError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Biology::S_Biology() : Table() {
	
}

XLELib::FF::S_Biology::S_Biology(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Biology::~S_Biology() {
	
}
