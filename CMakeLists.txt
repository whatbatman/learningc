cmake_minimum_required(VERSION 3.9)
project(learningc)

set(CMAKE_CXX_STANDARD 11)

add_executable(learningc
        1.6Arrays/1-13/histogram.c
        1.6Arrays/counter.c
        copyfile/copyfile.c
        copyfile/printEOF.c
        detab/detab.c
        hello_world/hello_world.c
        histogram/histogram.c
        linecounter/countblanks.c
        linecounter/linecounter.c
        power_func/power_func.c
        str_rev/str_rev.c
        temp_converter/float_temp_converter.c
        temp_converter/rev_for_temp_converter.c
        temp_converter/temp_converter.c)
