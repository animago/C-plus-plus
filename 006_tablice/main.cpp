#include <iostream>
#include <windows.h>

using namespace std;

float oceny[5];
float srednia;
float suma=0;

int main()
{
    cout << "Proszê podaj swoje oceny:" << endl;
    cout << endl;

    for (int i=0; i<5; i++){
        cout << "Ocena nr " <<i+1<<" : ";
        cin >> oceny[i];
        suma += oceny[i];
        cout << "suma: " <<suma<< endl;
        cout << endl;
    }

    cout << "Obliczam Twoja srednia!" << endl;
    cout << endl;

    Sleep(500);

    srednia = suma/5;


    cout << "Twoja srednia to: " << srednia<< endl;
    cout << endl;


    system ("pause");

    return 0;
}
