#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include "stdafx.h"

class ResourceManager{

public:
	static ResourceManager* getInstance();
	static void registerRenderer(SDL_Renderer* renderer);
	~ResourceManager();

	SDL_Texture* loadImage(std::string fileName);

protected:
private:
	ResourceManager();
	static ResourceManager* instance;
	static SDL_Renderer* renderer;
};


#endif