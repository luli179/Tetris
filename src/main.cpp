#include <iostream>
#include <thread>
#include <chrono>
#include "terminal.h"

using namespace std::chrono_literals;

int main(){
    
    tc::hide_cursor();

    int i = 0;
    while(true){
        tc::clean_screen();
        tc::mov_to(i++, 10);
        tc::set_back_color(15);
        std::cout << "  ";
        tc::reset_color();
        std::cout << std::flush;
        std::this_thread::sleep_for(500ms);

    }

    return 0;
}