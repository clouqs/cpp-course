//string methods
#include <iostream>

int main(){
    std::string str = "Hello World!";
    int x = str.length();
    char firstchar = str.at(0);
    std::cout << "First character of string is: " << firstchar << std::endl;
    std::cout << "\nLength of string is: " << x << std::endl;
}
