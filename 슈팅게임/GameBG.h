#pragma once

#include "Sprite.h"

class GameBG : public Sprite
{
private:


public:
	GameBG(string tag, string name, bool active, float px, float py);
	GameBG();
	~GameBG();

	void start();
	void update();
};