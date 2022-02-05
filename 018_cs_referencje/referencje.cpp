#include <iostream>
#include <string>

// TODO: Implement modifyString()
// It should modify passed string to text "Other string"


std::string modifyString(std::string& words){
    return words="Other string";
}


int main() {
    std::string str{"Some string"};
    modifyString(str);

    std::cout << str << '\n';
    std::cout << "\n \n";
    return 0;
}