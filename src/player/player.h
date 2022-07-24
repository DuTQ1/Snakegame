#ifndef __PLAYER_H__
#define __PLAYER_H__

#include<string>
#include<iostream>

using namespace std;
class player {
private:
	string name;
	int score=0;
public:

	void set_score(int Score) {
		score = Score;
	}
	int get_socre() {
		return score;
	}
	string get_name() {
		return name;
	}
	player() {
		cout << "Name player : ";
		getline(cin, name);
	}
};
#endif // __PLAYER_H__