#include <iostream>

// type conversions

// implicit or explicit
int main(){

    int correct = 8;
    int questions = 10;

    double score = correct/questions * 100;
    std::cout << score << "%";


}