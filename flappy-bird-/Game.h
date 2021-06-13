#pragma once

#include<iostream>
#include<string>

#include"Obstacle.h"
#include"Bird.h"

using namespace std;

namespace game {

	static bool isFirstStart = true;
	static int fps = 16;
	static Obstacle *ob[4];
	static Bird *b;
	static int point;
	static string mark;
	void init();//khoi tao
	void display();//man hinh
	void reshape(int w, int h);//he toa do va phep chieu
	void keyInput(unsigned char key, int, int);//phim di chuyen
	void drawPoint();//hien thi diem
	void gameOver();//ket thuc game
	void startGame();//bat dau game
	void timer(int);//vong lap thoi gian
	bool collisionWithTop(Pillar *p, Bird *b);
	bool collisionWithBottom(Pillar *p, Bird *b);

}


