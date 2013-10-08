
#include "gamewindow.h"

GameWindow::GameWindow(){
	window = SDL_CreateWindow("Clonario", 100, 50, 500, 300, 0);
	renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

GameWindow::~GameWindow(){
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}

GameWindow::GameWindow(GameWindow* other){

}