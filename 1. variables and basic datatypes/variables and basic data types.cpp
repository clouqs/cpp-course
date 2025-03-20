#include <iostream>

int main(){ //function declaration

// these are integer variables

    int x = 5;
    int y = 10;  
    std::cout << x << '\n';
    std::cout << y << '\n';

// double (floating point) variables

double a = 5.5;
double b = 10.5;
std::cout << a << '\n';
std::cout << b << '\n';

// single character variables

char c = 'A';
char d = 'B';  // can't put another character in char
std::cout << c << '\n';
std::cout << d << '\n';
    

// boolean variables (true or false) 1 is true and 0 is false

bool student = true;
bool teacher = false;
std::cout << teacher << '\n';

// strings 
std::string name = "Bro";
std::string day = "Friday";

std::cout << name;
std::cout << day << '\n';

return 0;
}