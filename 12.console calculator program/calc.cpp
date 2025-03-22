#include <iostream>

int main(){
    char op;
    double num1, num2;
    double result;

    std::cout << "*****Calculator*****\n";
    std::cout << "\nEnter the operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "\nEnter number 1: ";
    std::cin >> num1;
    std::cout << "\nEnter number 2: ";
    std::cin >> num2;

    if(op == '+'){
        result = num1 + num2;
    }
    else if(op == '-'){
        result = num1 - num2;
    }
    else if(op == '*'){
        result = num1 * num2;
    }
    else if(op == '/'){
        if(num2 == 0){
            std::cout << "\nDivision by zero is not allowed.";
            return 1;
        }
        result = num1 / num2;
    }
    else{
        std::cout << "Invalid operator.";
        return 1;
    }

    std::cout << "Result: " << result;
}