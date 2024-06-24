#include "common.h"
#include "utils.h"

int ut::fps()
{
    static auto start = std::chrono::steady_clock::now();
    static auto end = start;
    static int frame_count = 0;
    static int fps = 0;

    frame_count ++;
    end = std::chrono::steady_clock::now();
    if(end - start > 1s){

        fps = frame_count;
        frame_count = 0;

        //start = std::chrono::steady_clock::now();

        start = end;
        
    }
    return fps;
}