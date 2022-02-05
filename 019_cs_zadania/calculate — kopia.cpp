#include <iostream>
#include <string>

using namespace std;

int first, second;

std::string calculate(const std::string& command, int first, int second){
	if (command == "add"){		
         cout << std::to_string (first + second); << endl;
	} else if (command == "multiply"){
		cout << std::to_string (first * second); << endl;	
	} else {
		cout << "Invalid data" << endl;
	};
}

int main(){

auto result = calculate("add", 2, 3);  // result = "5"
result = calculate("multiply", 2, 3);  // result = "6"
result = calculate("hello", 2, 3);     // result = "Invalid data"


}