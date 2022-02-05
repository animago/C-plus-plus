#include <iostream>

constexpr size_t tab_size = 100;
int main () {
    int tab[tab_size];
    int j = 1;
    
    for (size_t i = 1; i < tab_size; ++i) {
        tab[i] = j;
        j = j+2;
        std::cout << tab[i] << " ";
    }

    std::cout << "\n\n ";
    return 0;
}