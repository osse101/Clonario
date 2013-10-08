
#include "gamewindow.h"

GameWindow::GameWindow(){
	window = SDL_CreateWindow("Clonario", 200, 200, 800, 600, 0);
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

void GameWindow::update(){
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(renderer);

	SDL_Rect* rect = new SDL_Rect();
	rect->w = 100; rect->h = 100;
	rect->x = 400-rect->w/2; rect->y = 300-rect->h/2;
	
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderFillRect(renderer, rect);
	delete rect;

	SDL_RenderPresent(renderer);
}