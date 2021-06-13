#include"Pillar.h"


Pillar::Pillar() {}

Pillar::Pillar(int x, int y, int w, int h) {
	this->posX = x;
	this->posY = y;
	this->width = w;
	this->heigh = h;

}

Pillar::~Pillar() {}

int Pillar::getPosX() {
	return this->posX;
}

int Pillar::getPosY() {
	return this->posY;
}

int Pillar::getWidth() {
	return this->width;
}

int Pillar::getHeight() {
	return this->heigh;
}

void Pillar::setPosX(int x) {
	this->posX = x;
}

void Pillar::setPosY(int y) {
	this->posY = y;
}

void Pillar::setWidth(int w) {
	this->width = w;
}

void Pillar::setHeight(int h) {
	this->heigh = h;
}

void Pillar::render() {
	glColor3f(0, 0.9, 0);
	glRectf(posX, posY, posX + width, posY + heigh);
}