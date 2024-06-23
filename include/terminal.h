#ifndef TERMINAL_H
#define TERMINAL_H

//ansi terminal contorl
namespace tc{

    void mov_to(const int& row, const int& col);
    void set_fore_color(const int& id);
    void set_back_color(const int& id);
    void clean_screen();
    void reset_color();
    void hide_cursor();
    void show_cursor();

}
#endif //TERMINAL_H