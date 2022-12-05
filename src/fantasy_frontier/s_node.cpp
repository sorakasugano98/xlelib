#include "s_node.hpp"

XLELib::FF::S_NodeError::S_NodeError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_NodeError::what() const throw() {
	std::string ret = "[XLELib FF S_NodeError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Node::S_Node() : Table() {
	
}

XLELib::FF::S_Node::S_Node(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Node::~S_Node() {
	
}

