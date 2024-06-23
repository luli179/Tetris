#include <iostream>
#include <thread>
#include <chrono>
#include "terminal.h"
#include "utils.h"

using namespace std::chrono_literals;

void init(){
    
    tc::hide_cursor();
}

void mainloop(){

    int i = 1;
    while(true){

        tc::clean_screen();

        tc::mov_to(1, 1);
        std::cout << "FPS:" << ut::fps();

        tc::mov_to(i++ % 20, 10);
        tc::set_back_color(15);
        std::cout << "  ";

        tc::reset_color();
        std::cout << std::flush;

        std::this_thread::sleep_for(16ms);

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