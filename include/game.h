#ifndef GAME_H
#define GAME_H
#include "tetromino.h"
namespace gm{

    extern bool running;
    extern int row, col;
    extern Tetromino cur_te_set; // I, J, S ...
    extern int index; 

    void init();
    void quit();

    void rotate();
    void left();
    void right();
    void down();


}


#endif