#include "s_node.hpp"

XLELib::FF::S_NodeError::S_NodeError(std::string msg) {
	error = "[XLELib FF S_NodeError] " + msg;
}

const char* XLELib::FF::S_NodeError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_Node::S_Node() : Conversion() {
	init_conversion();
}

XLELib::FF::S_Node::S_Node(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_Node::~S_Node() {
	
}

void XLELib::FF::S_Node::init_conversion() {
	class_pointer = this;
	conversions = {};
}
