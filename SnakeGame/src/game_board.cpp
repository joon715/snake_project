#include "game_board.h"

// 생성자
//
Game_board::Game_board() : max_x{90}, max_y{35} {}

// get_max_x()
//
const int Game_board::get_max_x() const
{
    return max_x;
}

// get_max_y()
//
const int Game_board::get_max_y() const
{
    return max_y;
}

// 게임 prompt 화면 출력
//
void Game_board::print_prompt(){
	border('*','*','*','*','*','*','*','*');
	mvprintw(1,10, "<Snake Game>");
	refresh();
	getch();
}

// 벽 생성 함수
//
void Game_board::print_wall(){
	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	w = (char)219;	// wall

	// 게임 실행되는 윈도우
	win1 = newwin(max_y, max_x, 3, 3);
	wbkgd(win1, COLOR_PAIR(1));
	wattron(win1, COLOR_PAIR(1));
	wborder(win1, w, w, w, w, w, w, w, w);
	wrefresh(win1);
}

// 점수판 생성 함수
//
void Game_board::print_score(){
	start_color();
	init_pair(2, COLOR_WHITE, COLOR_GREEN);
	
	// 점수판 표시하는 윈도우
	win2 = newwin(20, 40, 3, 95);
	wbkgd(win2, COLOR_PAIR(2));
	wattron(win2, COLOR_PAIR(2));
	wborder(win2, '|', '|', '-', '-', '*', '*', '*', '*');
	wrefresh(win2);
}

