#include "Menu.hpp"

void Menu::print_menu(){
    for(auto line : menu){
        std::cout << line << "\n";
    }
}

int Menu::get_choice(){
    int choice;

    std::cout << "Choose an option: ";
    std::cin >> choice;
    
    return choice;
}

