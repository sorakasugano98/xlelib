#include "s_panel.hpp"

XLELib::FF::S_PanelError::S_PanelError(std::string msg) {
	error = "[XLELib FF S_PanelError] " + msg;
}

const char* XLELib::FF::S_PanelError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Panel::S_Panel() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Panel::S_Panel(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Panel::~S_Panel() {
	
}

void XLELib::FF::S_Panel::init_conversion() {
	class_pointer = this;
	conversions = {};
}
