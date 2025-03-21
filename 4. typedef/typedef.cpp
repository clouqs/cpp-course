#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;

int main(){
    text_t text = "Hello World!";
    std::cout << text << std::endl;  // with typedef i can rename and create custom data types

    example_main();
    return 0;
}


//otherwise you can use the "using" keyword

using text2_t = std::string;

int example_main(){
    text2_t text = "Hello World!, second example";
    std::cout << text << std::endl;  
    return 0;
}