#ifndef GAME_MODEL_H
#define GAME_MODEL_H

#include "stdafx.h"

class GameModel{
public:
	GameModel();
	~GameModel();

	bool& operator[](int index);
	const bool& operator[](int index) const;
	bool getKey(int index);
	void setKey(int index, bool value);
protected:
private:
	bool* keysPressed;

};



#endif