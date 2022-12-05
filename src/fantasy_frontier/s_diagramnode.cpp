#include "s_diagramnode.hpp"

XLELib::FF::S_DiagramNodeError::S_DiagramNodeError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_DiagramNodeError::what() const throw() {
	std::string ret = "[XLELib FF S_DiagramNodeError] " + error;
	return ret.c_str();
}

XLELib::FF::S_DiagramNode::S_DiagramNode() : Table() {
	
}

XLELib::FF::S_DiagramNode::S_DiagramNode(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_DiagramNode::~S_DiagramNode() {
	
}

