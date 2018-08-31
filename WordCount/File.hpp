#pragma once

#include <stdio.h>
#include <iostream>
#include <fstream>

class File{
    
public:
    File() : filename(""){}
    ~File(){}
    
    int count_words();
    int count_lines();
    int count_chars();
    void get_filename();
private:
    std::string filename;
    
};
