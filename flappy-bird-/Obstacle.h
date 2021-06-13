#pragma once

#include<cstdlib>
#include<ctime>

#include"Pillar.h"

//mot cap ong tao thanh 1 truong ngai vat
class Obstacle {
private:
	bool isActive;
	int speed;
	int posX, posY;
	Pillar *top;//ong tren
	Pillar *bottom;//ong duoi
public:
	Obstacle();
	Obstacle(int x, int y);
	~Obstacle();
	int random(int min, int max);
	void setActive(bool a);
	void setSpeed(int s);
	int getPosX();
	int getPosY();
	bool getActive();
	Pillar* getTop();
	Pillar* getBottom();
	void update();
	void render();
};
