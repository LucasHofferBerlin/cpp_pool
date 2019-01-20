//
// EPITECH PROJECT, 2019
// texte.cpp
// File description:
// 
//

#include <ncurses.h>

int main(void)
{
    initscr();
    printw("Hello World");
    refresh();
    getch();
    endwin();
}
