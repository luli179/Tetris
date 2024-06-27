#ifndef DRAW_H
#define DRAW_H

#include "common.h"
#include "tetromino.h"

namespace dw{

    void logo();
    void window(const int& top, const int& left, const int& width, const int& height, const std::string title);
    void tetromino(const gm::Tetromino& t, const int& top, const int& left, const int & index);
}
#endif