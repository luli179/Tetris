#include <iostream>
#include <assert.h>
#include "draw.h"
#include "terminal.h"


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

    inline int block2col(const int& b){
        return 2 * b - 1;
    }

    void firstline(const int& width){
        assert(width >= 2);
        std::cout << " ┌";
        for(int col = 0; col < width-2 ; col++){
            std::cout << "──";
        }
        std::cout << "┐";
    }
    void lastline(const int& width){
        assert(width >= 2);
        std::cout << " └";
        for(int col = 0; col < width-2 ; col++){
            std::cout << "──";
        }
        std::cout << "┘";
    }
    void otherline(const int&top, const int& left, const int& width, const int& height){
        for(int row = top + 1; row < top + height -1; row ++){
            tc::mov_to(row, block2col(left));
            std::cout << " │";
            tc::mov_to(row, block2col(left + width - 1));
            std::cout << "│";
        }
    }
    void window(const int &top, const int &left, const int &width, const int &height, const std::string title){

        tc::mov_to(top, block2col(left));
        firstline(width);

        tc::mov_to(top + height -1, block2col(left));
        lastline(width);

        otherline(top, left, width, height);

        tc::mov_to(top, block2col(left) + (width * 2 - title.length())/2);
        std::cout << title;

    }
}