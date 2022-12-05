#include "s_diagramgroup.hpp"

XLELib::FF::S_DiagramGroupError::S_DiagramGroupError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_DiagramGroupError::what() const throw() {
	std::string ret = "[XLELib FF S_DiagramGroupError] " + error;
	return ret.c_str();
}

XLELib::FF::S_DiagramGroup::S_DiagramGroup() : Table() {
	
}

XLELib::FF::S_DiagramGroup::S_DiagramGroup(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_DiagramGroup::~S_DiagramGroup() {
	
}

