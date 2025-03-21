#include <iostream>
#include <cmath>
int main(){

    double x;
    double y;
    double z;
    std::cout << "Length side 1: ";
    std::cin >> x;
    std::cout << "\nLength side 2: ";
    std::cin >> y;
    z = sqrt(pow(x, 2) + pow(y, 2));
    std::cout << "\nHypotenuse: " << z;

}