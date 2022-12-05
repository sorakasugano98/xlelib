#include "s_panel.hpp"

XLELib::FF::S_PanelError::S_PanelError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_PanelError::what() const throw() {
	std::string ret = "[XLELib FF S_PanelError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Panel::S_Panel() : Table() {
	
}

XLELib::FF::S_Panel::S_Panel(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Panel::~S_Panel() {
	
}
