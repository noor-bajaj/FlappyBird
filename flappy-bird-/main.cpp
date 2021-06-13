#include"Game.h"

using namespace game;

int main() {
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition(300, 80);
	glutCreateWindow("Flappy Bird");

	init();
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutTimerFunc(500 / fps, timer, 0);
	glutKeyboardFunc(keyInput);
	glutMainLoop();

}
