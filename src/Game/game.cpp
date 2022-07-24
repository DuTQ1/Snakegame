#include "game.h"

Game::Game() {}
//ham ve thanh ngang cho khung
void Game::drawColum(int x, int y, int y1) {
	int a = x;
	while (x <= 95) {
		gotoXY(x, y);
		cout << "*";
		x++;
	}
	while (a <= 95) {
		gotoXY(a, y1);
		cout << "*";
		a++;
	}
}
//ham ve thanh doc cho khung
void Game::drawRow(int y, int x, int x1) {
	int a = y;
	int b = y;
	while (y <= 25) {
		gotoXY(x, y);
		cout << "*";
		y++;
	}
	while (a <= 25) {
		gotoXY(x1, a);
		cout << "*";
		a++;
	}
	while (b <= 25) {
		gotoXY(95, b);
		cout << "*";
		b++;
	}
}
//ham dua con tro den toa do x, y
void Game::gotoXY(int x, int y) {
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x, y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
//ham doc ky tu nhap vao
void Game::read_word() {

	if (_kbhit()) {
		char ky_tu = _getch();
		if (ky_tu == 'w' && check != "down") {
			check = "up";
		}
		if (ky_tu == 's' && check != "up") {
			check = "down";
		}
		if (ky_tu == 'a' && check != "right"&& check != "") {
			check = "left";
		}
		else if (ky_tu == 'd' && check != "left") {
			check = "right";
		}
	}
}
Game::~Game() {}