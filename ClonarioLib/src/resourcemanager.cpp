#include "resourcemanager.h"

ResourceManager* ResourceManager::instance;
SDL_Renderer* ResourceManager::renderer;

ResourceManager* ResourceManager::getInstance(){
	if(!instance){
		instance = new ResourceManager();
	}
	return instance;
}

void ResourceManager::registerRenderer(SDL_Renderer* renderer){
	ResourceManager::renderer = renderer;
}