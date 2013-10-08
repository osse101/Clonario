
#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include <SDL.h>

class GameWindow{
public:
	GameWindow();
	~GameWindow();
	GameWindow(GameWindow* other);
	
protected:
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};


#endif
