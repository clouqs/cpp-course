#include <iostream>

int main(){
    // && - logical AND
    // || - logical OR
    // ! - logical NOT

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp>0 && temp<30){
        std::cout << "Temperature is good";
    }
    else{
        std::cout << "Temperature is bad!";
    }
}