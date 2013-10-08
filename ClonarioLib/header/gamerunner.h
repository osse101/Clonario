
#ifndef GAME_RUNNER_H
#define GAME_RUNNER_H

#include <iostream>
#include <SDL.h>
#include "gamewindow.h"
#include "gamemodel.h"

class GameRunner{
public:
	GameRunner();
	~GameRunner();
	bool init();
	void run();
	void cleanup();
protected:

private:
	void handleEvents();
	GameWindow* window;
	GameModel* model;
	bool isRunning;
};

#endif