#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile=1000000000;
clock_t poczatek, koniec;
double czas;

int main()
{
    cout << "Ile liczb w tablicy: " <<ile<< endl;
        cout<<endl;

// rezerwacja adresow dla tablicy
    int *tablica;
    tablica = new int[ile];

    poczatek=clock();
    for (int i=0; i<ile; i++)
    {
        tablica[i]=i;
        tablica[i]+=1;
    }
    koniec = clock();

    czas = (double)(koniec-poczatek)/CLOCKS_PER_SEC;
    cout << "Czas zapisu (bez wskaznika): " << czas << endl;
    delete [] tablica;

    cout<<endl;

// rezerwacja adresow dla tablicy ze w_tablicaiem

    int *w_tablica = tablica;
    tablica = new int[ile];

    poczatek=clock();
    for (int i=0; i<ile; i++)
    {
        w_tablica=&tablica[i];
        w_tablica=&tablica[i+1];
        w_tablica++;
    }

    koniec = clock();

    czas = (double)(koniec-poczatek)/CLOCKS_PER_SEC;
    cout << "Czas zapisu (ze wskaznikiem): " << czas << endl;

    delete [] tablica;

    return 0;
}

