#ifndef TETROMINO_H
#define TETROMINO_H

#include "common.h"

namespace gm{

    // 7 tetrominos
    // I, J, L, O, S, T, Z 

    // 4 rotation
    // 0, R, 2, L

    /*

    I:
    
    0: □□□□
    (-1,0)(0,0)(1,0)(2,0)

    R:□ (0,1)
      □ (0,0)
      □ (0,-1)
      □ (0,-2)

    2:
    L:

    */
    using Tetromino = std::array<std::array<std::pair<int, int>, 4> ,4>;

    extern Tetromino I, J, L, O, S, T, Z;
}
#endif