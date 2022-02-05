#include <iostream>
#include <math.h>

using namespace std;

int liczba, testy;
int  wyniki[100000];


bool sprawdz_czy_pierwsza(int a)
{
    if(a<2) return false;//liczby pierwsze należą do przedziału [2,+infinty)
    //więc mniejszych od dwóch nie bierzemy pod uwagę

    for(int i=2; i<=sqrt(a); i++)//wystarczy, że będziemy szukać dzielników do pierwiastka z liczby "a"
        if(a%i==0)return false;//jesli "i" jest dzielnikiem liczby "a" to "a" nie jest liczbą pierwszą

    return true;
}

int main()
{
    cin >> testy;
    for (int i=0; i<testy; i++)
    {
        cin >>liczba;
        wyniki[i]=sprawdz_czy_pierwsza(liczba);
    }

    for (int i=0; i<testy; i++)
    {
        if (wyniki[i]==1)
            cout <<"TAK"<< endl;
        else
            cout <<"NIE"<< endl;
    }
    return 0;
}
