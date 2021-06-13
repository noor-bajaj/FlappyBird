#pragma once

#include<gl/glut.h>
#include<gl/GLU.h>
#include<gl/GL.h>

//ong nuoc
class Pillar {
private:
	int posX, posY, width, heigh;
public:
	Pillar();
	Pillar(int x, int y, int w, int h);
	~Pillar();
	void render();
	int getPosX();
	int getPosY();
	int getWidth();
	int getHeight();
	void setPosX(int x);
	void setPosY(int y);
	void setWidth(int w);
	void setHeight(int h);
};

