#include "s_cutscene.hpp"

XLELib::FF::S_CutSceneError::S_CutSceneError(std::string msg) {
	error = "[XLELib FF S_CutSceneError] " + msg;
}

const char* XLELib::FF::S_CutSceneError::what() const throw() {
	return error.c_str();
}

XLELib::FF::S_CutScene::S_CutScene() : Conversion() {
	init_conversion();
}

XLELib::FF::S_CutScene::S_CutScene(std::string input_file) : Conversion(input_file) {
	init_conversion();
}

XLELib::FF::S_CutScene::~S_CutScene() {
	
}

void XLELib::FF::S_CutScene::init_conversion() {
	class_pointer = this;
	conversions = {};
}
