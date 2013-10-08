
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
	std::cout << "Enter me: ";
	char c;
	std::cin >> c;
	gr->cleanup();
	delete gr;

	

	std::cout << "Stopping\n";
	return 0;
}

