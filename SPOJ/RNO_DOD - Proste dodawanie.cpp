#include <iostream>
using namespace std;

int testy, wyniki[100], ilosc, liczby[100];
int sumuj(int ilosc, int liczby[])
{
    int suma;
    for (int i=0; i<ilosc; i++) suma+=liczby[i];
    return suma;
}

int main()
{
    cin >> testy;
    for (int i=0; i<testy; i++)
    {
        cin >> ilosc;
        for (int i=0; i<ilosc; i++)
        {
            cin >> liczby[i];
        }
        wyniki[i]=sumuj(ilosc, liczby);
    }

    for (int i=0; i<testy; i++)
    {
        cout <<wyniki[i]<< endl;
    }
    return 0;
}
