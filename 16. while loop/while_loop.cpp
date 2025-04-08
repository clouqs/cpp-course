#include <iostream>

int main(){
    std::string name;
    while(name.empty()){    // if name.empty true then loop will run
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
        if (name.length() < 3){
            std::cout << "Name is too short. Please enter a longer name." << std::endl;
            name.clear(); // Clear the name to prompt again
        }
        else if (name.length() > 20){
            std::cout << "Name is too long. Please enter a shorter name." << std::endl;
            name.clear(); // Clear the name to prompt again
        }
    }
    std::cout << "Hello, " << name << "!" << std::endl;
}