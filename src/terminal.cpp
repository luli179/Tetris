#include <iostream>
#include "terminal.h"

#define CSI "\033["

// cursor to (row,col)
void tc::mov_to(int row, int col){
    std::cout << CSI << row << ';' << col<< 'H';
}

//set foreground color
void tc::set_fore_color(int id){
    std::cout<< CSI << "38;5;" << id << 'm';
}

//set background color
void tc::set_back_color(int id){
    std::cout << CSI << "48;5;" << id << 'm';
}

void tc::clean_screen(){
    std::cout << CSI << "2J";
}

void tc::reset_color(){
    std::cout << CSI << "0m";
}

void tc::hide_cursor(){
    std::cout << CSI << "?25l";
}

void tc::show_cursor(){
    std::cout << CSI << "?25h";
}
