#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int populacja=1, godzin=0;

int main()
{
    do
    {
        godzin++;
        populacja = populacja*2;

        cout << "minelo godzin: " << godzin;
        cout << " ilosc bakteri: " << populacja << endl;

    } while( populacja <1000000000);


    return 0;
}
