#ifndef GAME_H
#define GAME_H

namespace gm{

    extern bool running;
    extern int row, col;

    void init();
    void quit();

    void rotate();
    void left();
    void right();
    void down();


}


#endif