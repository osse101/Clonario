
#include "gamerunner.h"

GameRunner::GameRunner(){
	
	SDL_Init( SDL_INIT_EVERYTHING );
}

GameRunner::~GameRunner(){
	SDL_Quit();
}

bool GameRunner::init(){
	window = new GameWindow();
	model = new GameModel();
	isRunning=true;
	return true;
}

void GameRunner::run(){
	std::cout << "Game Running\n";

	while(isRunning){
		handleEvents();
		window->update();
	}
}

void GameRunner::handleEvents(){
	SDL_Event event;
	SDL_PollEvent(&event);
		switch(event.type){
		case SDL_EventType::SDL_QUIT:
			isRunning=false;
			break;
		
		case SDL_EventType::SDL_KEYDOWN:
			model->setKey(event.key.keysym.scancode, true);
			break;
		case SDL_EventType::SDL_KEYUP:
			model->setKey(event.key.keysym.scancode, false);
			break;
		case SDL_EventType::SDL_MOUSEBUTTONDOWN:
			break;
		case SDL_EventType::SDL_MOUSEBUTTONUP:
			break;
		default:
			break;
		}
}

void GameRunner::cleanup(){
	delete window;
	delete model;
}

