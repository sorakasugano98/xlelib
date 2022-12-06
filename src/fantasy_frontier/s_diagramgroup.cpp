#include "s_diagramgroup.hpp"

XLELib::FF::S_DiagramGroupError::S_DiagramGroupError(std::string msg) {
	error = "[XLELib FF S_DiagramGroupError] " + msg;
}

const char* XLELib::FF::S_DiagramGroupError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_DiagramGroup::S_DiagramGroup() : Conversion() {
	init_conversion();
}

XLELib::FF::S_DiagramGroup::S_DiagramGroup(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_DiagramGroup::~S_DiagramGroup() {
	
}

void XLELib::FF::S_DiagramGroup::init_conversion() {
	class_pointer = this;
	conversions = {};
}
