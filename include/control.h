#ifndef CONTROL_H
#define CONTROL_H

namespace gm{

    extern char command;
    char getch();
    void key_event();
    void start_listen();

    //command function
    void command_quit();
    void command_left();
    void command_right();
    void command_rotate();
    void command_down();
}
#endif