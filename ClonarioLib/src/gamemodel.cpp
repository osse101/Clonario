#include "gamemodel.h"

const int KEY_CODE_COUNT = 300;

GameModel::GameModel(){
	keysPressed = new bool[KEY_CODE_COUNT];
}

GameModel::~GameModel(){
	delete keysPressed;
}

void GameModel::setKey(int index, bool value){
	keysPressed[index] = value;
}

bool GameModel::getKey(int index){
	return keysPressed[index];
}

bool& GameModel::operator[](int index){
	return keysPressed[index];
}

const bool& GameModel::operator[](int index) const{
	return keysPressed[index];
}