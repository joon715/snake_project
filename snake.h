#include <iostream>
#include <vector>
#include <ncurses.h>
#include <cstdlib>
#ifndef SNAKE_H
#define SNAKE_H
struct snakepart{
    int x,y;
    snakepart(int col, int row);
    snakepart();
};

class snakeclass{
    int points,del;
    //indicates that the snake get food (it makes the snake longer)
    bool get,lost; 
    //indicates the current direction of the snake
    char direction;

    int maxwidth;
    int maxheight;
    char partchar;
    char oldalchar;
    char etel;
    char pstel;
    snakepart food;
    snakepart poison;

    std::vector<snakepart> snake; //represent the snake

    void putfood();
    void putpoison();
    bool collision();
    void movesnake();

public:
    snakeclass();
    ~snakeclass();
    void start();
};

#endif
