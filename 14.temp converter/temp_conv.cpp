#include <iostream>

double cels2fahr(double temp) {
    return temp * 9.0 / 5.0 + 32;
}

double fahr2cels(double temp) {
    return (temp - 32) * 5.0 / 9.0;
}

int main(){

    double temp;
    int choice;
    std::cout << "*****Temperature Converter*****\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Fahrenheit to Celsius\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch(choice){
        case 1:
            std::cout << "Enter the temperature in Celsius: ";
            std::cin >> temp;
            std::cout << "Temperature in Fahrenheit: " << cels2fahr(temp);
            break;
        case 2:
            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin >> temp;
            std::cout << "Temperature in Celsius: " << fahr2cels(temp);
            break;
        default:
            std::cout << "Invalid choice.";
            break;
    }
}