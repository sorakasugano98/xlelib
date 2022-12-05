#include "s_transport.hpp"

XLELib::FF::S_TransportError::S_TransportError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_TransportError::what() const throw() {
	std::string ret = "[XLELib FF S_TransportError] " + error;
	return ret.c_str();
}

XLELib::FF::S_Transport::S_Transport() : Table() {
	
}

XLELib::FF::S_Transport::S_Transport(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_Transport::~S_Transport() {
	
}

