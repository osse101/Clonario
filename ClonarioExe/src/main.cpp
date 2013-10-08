
#include <iostream>
#include <tchar.h>
#include <SDL.h>
#include "gamerunner.h"

int SDL_main(int argc, _TCHAR* argv[]){
	std::cout << "Starting\n";

	GameRunner* gr = new GameRunner();
	if(!gr->init())
		return -1;
	gr->run();
	delete gr;

	std::cout << "Enter me: ";
	char c;
	std::cin >> c;

	std::cout << "Stopping\n";
	return 0;
}

