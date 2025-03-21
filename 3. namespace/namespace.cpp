#include <iostream>


namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    int x = 0;
    std::cout << first::x; //if i want to use x from first namespace i put "first::" before x
    return 0;
}