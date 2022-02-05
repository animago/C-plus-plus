#include <iostream>
#include <string>

int first, second;

std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
        return(std::to_string(first + second));
    }
    else if (command == "subtract") {
        return(std::to_string(first - second));
    }
    else if (command == "multiply") {
        return(std::to_string(first * second));
    }
    else if (command == "divide") {
        return(std::to_string(first / second));
    }
    else {
         return("Invalid data");
    };

}


int main(){

auto result = calculate("add", 2, 3);  // result = "5"
std::cout << result << std::endl;

result = calculate("multiply", 2, 3);  // result = "6"
std::cout << result << std::endl;

result = calculate("divide", 8, 2);  // result = "6"
std::cout << result << std::endl;

result = calculate("hello", 2, 3);     // result = "Invalid data"
std::cout << result << std::endl;

};