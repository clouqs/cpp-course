#include <iostream>
#include <cmath>

int main(){
    int age;
    std::cout << "Enter your age: ";
    if (!(std::cin >> age)){                 // checks should be always on top
        std::cout << "Invalid input.";
        return 1;
    }
    if (age >= 120){
        std::cout << "You are a super adult.";
    } else if (age >= 18){
        std::cout << "You are an adult.";
    } else {
        std::cout << "You are a minor.";
    }
}