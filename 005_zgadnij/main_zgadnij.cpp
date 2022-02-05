#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, proba=0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbê 1..100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        cout << "Zgadnij jaka: ";
        cin >> strzal;
        proba++;

        if(strzal==liczba)
            cout << "Proba numer: " <<proba<< ". Udalo sie! Wygrywasz." << endl;
        cout << endl;
        if(strzal<liczba)
            cout << "Proba numer: " <<proba<< ". To za malo!" << endl;
        cout << endl;
        if(strzal>liczba)
            cout << "Proba numer: " <<proba<< ". To za duzo" << endl;
        cout << endl;

    }

    system ("pause");

    return 0;
}
