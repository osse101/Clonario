
#include <iostream>
#include "gamerunner.h"


int main(){

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