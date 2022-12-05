#include "s_cutscene.hpp"

XLELib::FF::S_CutSceneError::S_CutSceneError(std::string msg) : error(msg) {
	
}

const char* XLELib::FF::S_CutSceneError::what() const throw() {
	std::string ret = "[XLELib FF S_CutSceneError] " + error;
	return ret.c_str();
}

XLELib::FF::S_CutScene::S_CutScene() : Table() {
	
}

XLELib::FF::S_CutScene::S_CutScene(std::string input_file) : Table(input_file) {
	
}

XLELib::FF::S_CutScene::~S_CutScene() {
	
}

