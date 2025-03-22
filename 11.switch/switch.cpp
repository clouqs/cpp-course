#include <iostream>

int main(){
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "\nJanuary";
            break;
        case 2:
            std::cout << "\nFebruary";
            break;
        case 3:
            std::cout << "\nMarch";
            break;
        case 4:
            std::cout << "\nApril";
            break;
        case 5:
            std::cout << "\nMay";
            break;
        case 6:
            std::cout << "\nJune";
            break;
        case 7:
            std::cout << "\nJuly";
            break;
        case 8:
            std::cout << "\nAugust";
            break;
        case 9:
            std::cout << "\nSeptember";
            break;
        case 10:
            std::cout << "\nOctober";
            break;
        case 11:
            std::cout << "\nNovember";
            break;
        case 12:
            std::cout << "\nDecember";
            break;
        default:                             // default is like else in if statements
            std::cout << "\nInvalid month.";
            break;

    }
}