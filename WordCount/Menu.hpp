
#include <iostream>
#include <string>
#include <array>
#include <sstream>

class Menu{
    
public:
    void print_menu();
    int get_choice();

    
private:
    std::array<std::string, 5> menu = {
        "Welcome to Word Counter",
        "1) Count Words",
        "2) Count Lines",
        "3) Count Characters",
        "4) Exit"
    };
    
};
