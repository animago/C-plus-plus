#include <iostream>

class Test {
public:
  Test() { std::cout << "Konstruktor" << std::endl; }
  Test(const Test &) { std::cout << "Konstruktor kopiujacy" << std::endl; }
  ~Test() { std::cout << "Destruktor" << std::endl; }
};

int main() {
  { Test zmienna; }
  std::cout << "---" << std::endl;
  {
    Test zmienna1;
    Test zmienna2 = zmienna1;
  }
}
