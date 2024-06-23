#include <iostream>
#include <thread>
#include <chrono>
#include "terminal.h"
#include "utils.h"
#include "draw.h"

using namespace std::chrono_literals;

void init(){
    
    tc::clean_screen();
    tc::hide_cursor();
    dw::window(1, 1, 9, 6, "Hold");
    dw::window(1, 10, 12, 22, "Tetris");
    dw::window(7, 1, 9, 16, "Status");
    dw::window(19, 22, 8, 4, "Info");
    dw::window(1, 22, 8, 18, "Next");
}

void mainloop(){

    int i = 1;
    while(true){

        tc::mov_to(10, 1);
        std::cout << "FPS:" << ut::fps();

        tc::mov_to(5, 5);
        tc::set_back_color(15);
        std::cout << "  ";

        tc::reset_color();
        std::cout << std::flush;

        std::this_thread::sleep_for(16ms); //60fps

    }
}

void exit(){
    tc::show_cursor();
    tc::reset_color();
}

int main(){
    
    init();
    mainloop();
    exit();

    return 0;
}