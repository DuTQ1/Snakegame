#ifndef __GAMESNACK_H__
#define __GAMESNACK_H__

#include <iostream>
#include <vector>
#include "../Game/game.h"
#include"../player/player.h"

using namespace std;



class GameSnake : public Game{
public:
    vector<int> snake;
    GameSnake();
    void draw_snake();
    void remove_snake();
    bool game_over();
    void new_snake(int x, int y);
    void control();
    void creat_food();
    void eat_food(player &P);
    ~GameSnake();
};
#endif // __GAMESNACK_H__