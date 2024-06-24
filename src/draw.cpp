#include <iostream>
#include <assert.h>
#include "draw.h"
#include "terminal.h"
#include "utils.h"


/*
 	    0	1	2	3	4	5	6	7	8	9	A	B	C	D	E	F
U+250x	─	━	│	┃	┄	┅	┆	┇	┈	┉	┊	┋	┌	┍	┎	┏
U+251x	┐	┑	┒	┓	└	┕	┖	┗	┘	┙	┚	┛	├	┝	┞	┟
U+252x	┠	┡	┢	┣	┤	┥	┦	┧	┨	┩	┪	┫	┬	┭	┮	┯
U+253x	┰	┱	┲	┳	┴	┵	┶	┷	┸	┹	┺	┻	┼	┽	┾	┿
U+254x	╀	╁	╂	╃	╄	╅	╆	╇	╈	╉	╊	╋	╌	╍	╎	╏
U+255x	═	║	╒	╓	╔	╕	╖	╗	╘	╙	╚	╛	╜	╝	╞	╟
U+256x	╠	╡	╢	╣	╤	╥	╦	╧	╨	╩	╪	╫	╬	╭	╮	╯
U+257x	╰	╱	╲	╳	╴	╵	╶	╷	╸	╹	╺	╻	╼	╽	╾	╿
*/

/*  a window

 ┌───────────────┐
 │               │          
 │               │
 │               │
 │               │
 └───────────────┘

*/

namespace dw{

    const std::string style1[7] = {" ", "─", "│", "┌", "┐", "└", "┘"};
    const std::string style2[7] = {" ", "═", "║", "╔", "╗", "╚", "╝"};
    const std::string style3[7] = {" ", "━", "┃", "┏", "┓", "┗", "┛"};
    const std::string style4[7] = {" ", "─", "│", "╭", "╮", "╰", "╯"};
    const std::string* cur_style = style4;


    void firstline(const int& width){
        assert(width >= 2);
        std::cout << cur_style[0] << cur_style[3];
        for(int col = 0; col < width-2 ; col++){
            std::cout << cur_style[1] << cur_style[1];
        }
        std::cout << cur_style[4];
    }
    void lastline(const int& width){
        assert(width >= 2);
        std::cout << cur_style[0] << cur_style[5];
        for(int col = 0; col < width-2 ; col++){
            std::cout << cur_style[1] << cur_style[1];
        }
        std::cout << cur_style[6];
    }
    void otherline(const int&top, const int& left, const int& width, const int& height){
        for(int row = top + 1; row < top + height -1; row ++){
            tc::mov_to(row, ut::b2c(left));
            std::cout << cur_style[0] << cur_style[2];
            tc::mov_to(row, ut::b2c(left + width - 1));
            std::cout << cur_style[2];
        }
    }
    void window(const int &top, const int &left, const int &width, const int &height, const std::string title){

        tc::mov_to(top, ut::b2c(left));
        firstline(width);

        tc::mov_to(top + height -1, ut::b2c(left));
        lastline(width);

        otherline(top, left, width, height);

        tc::mov_to(top, ut::b2c(left) + (width * 2 - title.length())/2);
        std::cout << title;

    }
}