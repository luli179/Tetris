#include "game.h"
#include "tetromino.h"

namespace gm{

    bool running;

    int row, col;

    Tetromino cur_te_set;
    int index;

    void init(){
        running = true;
        row = 2;
        col = 15;
        cur_te_set = J;
        index = 0;
    }

    void quit(){

        running = false;
    }

    void rotate(){
        index = (index + 1) % 4;
    }

    void left(){
        col--;
    }

    void right(){
        col++;
    }

    void down(){
        row++;
    }
}
