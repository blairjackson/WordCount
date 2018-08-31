#include <iostream>

#include "Menu.hpp"
#include "File.hpp"

int main(int argc, const char * argv[]) {
    
    Menu menu;
    File file;
    
    bool exit = false;
    int choice = 0;

    do{
        menu.print_menu();
        choice = menu.get_choice();
        
        switch (choice) {
            case 1:
                std::cout << "\nword count: " << file.count_words() << "\n\n";
                break;
            case 2:
                std::cout << "\nline count: " << file.count_lines() << "\n\n";
                break;
            case 3:
                std::cout << "\ncharacter count: " << file.count_chars() << "\n\n";
                break;
            case 4:
                std::cout << "GoodBye\n";
                exit = true;
                break;
            default:
                std::cout << "Invalid choice\n";
                break;
        }
        
        
    }while(!exit);
    
    
    
    return 0;
}
