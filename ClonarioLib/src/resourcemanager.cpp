#include "resourcemanager.h"

ResourceManager* ResourceManager::instance=NULL;
SDL_Renderer* ResourceManager::renderer=NULL;

ResourceManager* ResourceManager::getInstance(){
	if(!instance){
		instance = new ResourceManager();
	}
	return instance;
}

void ResourceManager::registerRenderer(SDL_Renderer* renderer){
	ResourceManager::renderer = renderer;
}

SDL_Texture* ResourceManager::loadImage(std::string fileName){
	if(renderer==NULL){return NULL;}
	
	std::cout << "Loading Image " << fileName << std::endl;
	SDL_Surface* surf = IMG_Load(fileName.c_str());
	if(surf==NULL){return NULL;}

	std::cout << "Image located\n";
	SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, surf);
	SDL_FreeSurface(surf);

	std::cout << "Load Image complete\n";
	return tex;
}

ResourceManager::ResourceManager(){

}

ResourceManager::~ResourceManager(){

}