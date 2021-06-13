#include"Obstacle.h"

Obstacle::Obstacle() {}

Obstacle::Obstacle(int x, int y) {
	this->posX = x;
	this->posY = y;
	isActive = false;
	speed = 0;
	top = new Pillar(x, y + 60, 30, 400);
	bottom = new Pillar(x, y - 60, 30, -400);
}

Obstacle::~Obstacle() {
	delete top;
	delete bottom;
}

int Obstacle::random(int min, int delta) {
	//srand(time(NULL));
	return min + 2 * (rand() % delta + 1);
}

void Obstacle::setActive(bool a) {
	this->isActive = a;
}

void Obstacle::setSpeed(int s) {
	this->speed = s;
}

bool Obstacle::getActive() {
	return this->isActive;
}

int Obstacle::getPosX() {
	return this->posX;
}

int Obstacle::getPosY() {
	return this->posY;
}

Pillar* Obstacle::getTop() {
	return this->top;
}

Pillar* Obstacle::getBottom() {
	return this->bottom;
}

void Obstacle::update() {
	this->posX -= speed;
	top->setPosX(this->posX);
	bottom->setPosX(this->posX);

	if (this->posX <= 200 && this->posX >= 100) isActive = true;
	else isActive = false;

	if (this->posX <= -100) {
		posY = random(150, 150);
		posX = 700;
	}
	top->setPosY(this->posY + 60);
	bottom->setPosY(this->posY - 60);
}

void Obstacle::render() {
	this->top->render();
	this->bottom->render();
}