
#include "gamerunner.h"

GameRunner::GameRunner(){
	
	SDL_Init( SDL_INIT_EVERYTHING );
}

GameRunner::~GameRunner(){
	SDL_Quit();
}

bool GameRunner::init(){
	window = new GameWindow();
	return true;
}

void GameRunner::run(){
	std::cout << "Game Running\n";
	
}

void GameRunner::cleanup(){
	delete window;
}

