#include <iostream>
#include <vector>
#include <ncurses.h>
#include <cstdlib>

#ifndef GAME_BOARD_H
#define GAME_BOARD_H

class Game_board
{
public:
	Game_board();

	void print_prompt();
	void print_wall();
	void print_score();

	// void clear();

	const int get_max_x() const;
	const int get_max_y() const;

private:
	const int max_x;
	const int max_y;
        char w;     // 벽 구성 문자
	WINDOW *win1;	// 게임 실행 윈도우
	WINDOW *win2;	// 점수판 윈도우
};

#endif
