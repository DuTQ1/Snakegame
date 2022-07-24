#ifndef __SETUP_H__
#define __SETUP_H__

#include"../GameSnake/GameSnake.h"
#include"player.h"

using namespace std;


int m;
//ham set toc do
void setSleep() {
	int n;
	system("cls");
	cout << "\n1. Cap do trung binh";
	cout << "\n2. Cap do kho";
	cout << "\nLua chon cua ban : ";
	cin >> n;
	cin.ignore();
	if (n == 1) {
		m = 200;
	}
	else if (n == 2) {
		m = 100;
	}
	system("cls");
}

void draw(player p, GameSnake gs) {
	system("cls");
	gs.gotoXY(77, 7);
	cout << "player: " << p.get_name();
	p.set_score(0);
	gs.gotoXY(77, 9);
	cout << "Socre : " << p.get_socre();
	gs.drawRow(5, 10, 75);
	gs.drawColum(10, 5, 25);
	gs.draw_snake();
	gs.creat_food();

}
#endif // __SETUP_H__