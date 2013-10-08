
#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include "stdafx.h"

class GameWindow{
public:
	GameWindow();
	~GameWindow();
	GameWindow(GameWindow* other);
	void update();
protected:
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};


#endif
