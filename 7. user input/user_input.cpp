#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    

    int age;
    std::cout << "\nEnter your age: ";
    std::cin >> age;
    std::cout << "Hello, " << name;
    std::cout << "\nYou are " << age << " years old.";

}