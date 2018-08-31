#include "File.hpp"


void File::get_filename(){
    std::cout << "Which file would you like to count(use absolute path)? ";
    std::cin >> filename;
}


int File::count_words(){
    std::string word;
    int count = 0;
    
    get_filename();
    
    std::ifstream file(filename);
    if(!file){
        std::cerr << "Problem with file\n";
        return -1;
    }
    
    while(file >> word){
        ++count;
    }
    
    return count;
}

int File::count_lines(){
    std::string line;
    int count = 0;
    
    get_filename();
    
    std::ifstream file(filename);
    if(!file){
        std::cerr << "Problem with file\n";
        return -1;
    }
    
    while(std::getline(file, line)){
        ++count;
    }
    
    return count;
}

int File::count_chars(){
    std::string word;
    int count = 0;
    
    get_filename();
    
    std::ifstream file(filename);
    if(!file){
        std::cerr << "Problem with file\n";
        return -1;
    }
    
    while(file >> word){
        size_t len = word.size();
        for(int i = 0; i < len; ++i)
            ++count;
    }
    
    return count;
}
