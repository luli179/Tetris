#include "common.h"

#include "terminal.h"
#include "utils.h"
#include "draw.h"
#include "control.h"
#include "game.h"



char command;



void init(){
    
    tc::hide_cursor();
    gm::start_listen();
    gm::init();

}

void mainloop(){

    while(gm::running){

        tc::clean_screen();

        dw::window(1, 1, 9, 6, "Hold");
        dw::window(1, 10, 12, 22, "Tetris");
        dw::window(7, 1, 9, 16, "Status");
        dw::window(19, 22, 8, 4, "Info");
        dw::window(1, 22, 8, 18, "Next");

        tc::mov_to(10, 1);
        std::cout << "FPS:" << ut::fps();

        tc::mov_to(gm::row, ut::b2c(gm::col));
        tc::set_back_color(15);
        std::cout << "  ";

        tc::reset_color();
        std::cout << std::flush;

        std::this_thread::sleep_for(33ms); //30fps

    }
}

void exit(){
    tc::show_cursor();
    tc::reset_color();
    tc::clean_screen();
    tc::mov_to(1, 1);
    std::cout << "BYE" << std::endl;
}

int main(){
    
    init();
    mainloop();
    exit();

    return 0;
}