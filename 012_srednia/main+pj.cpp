#include <iostream>

using namespace std;

float wyznacz_najblizsza_sredniej(float liczby[], int ilosc);
float oblicz_srednia(float dane[], int ile_liczb);
float wartosc_bezwzgledna(float x);


int main()
{
//    float liczby[5];
//    int ilosc=5;
//    cout << "Ile liczb: "<<endl;
//    cin >> ilosc;
//    cout << "Wprowadz liczby: "<<endl;
//
//    for (int i=0; i< ilosc; i++)
//        cin >> liczby[i];

    float liczby0[5] = {1.5,3.14,7.5,1.25,3.42};
    int ilosc0=5;
    wyznacz_najblizsza_sredniej(liczby0,ilosc0); //3.42
    cout << endl;

    float liczby1[5] = {-55,-44,-33,11,22};
    int ilosc1=5;
    wyznacz_najblizsza_sredniej(liczby1,ilosc1); //-33
    cout << endl;

    float liczby2[5] = {3,5,3,1,3};
    int ilosc2=5;
    wyznacz_najblizsza_sredniej(liczby2,ilosc2); //3
    cout << endl;

    float liczby3[5] = {6.5,3.5,0,15,0};
    int ilosc3=5;
    wyznacz_najblizsza_sredniej(liczby3,ilosc3); //6.5 i 3.5
    cout << endl;
    return 0;
}


float wyznacz_najblizsza_sredniej(float liczby[], int ilosc)
{

    float srednia, najblizsza, wybrana;

    // obliczanie sredniej
    srednia = oblicz_srednia (liczby,ilosc);
    najblizsza = wartosc_bezwzgledna(liczby[0]-srednia);

    for (int i=0; i<ilosc; i++)
    {
        if( wartosc_bezwzgledna(liczby[i]) - wartosc_bezwzgledna(srednia) <= najblizsza)
            najblizsza = wartosc_bezwzgledna(liczby[i]-srednia);
            wybrana = liczby[i];
    }

    cout << " liczba/y najblizsza/e sredniej: "<< wybrana<<endl;

    return 0;
}



float oblicz_srednia(float dane[], int ile_liczb)
{
    float srednia,suma=0;
    for (int i=0; i<ile_liczb; i++)
    {
        suma+=dane[i];
        cout <<dane[i]<<" ";
    }
    srednia=suma/ile_liczb;

    cout << " suma: " << suma;
    cout << " srednia: " << srednia;
    return srednia;

};

float wartosc_bezwzgledna(float x)
{
    if(x<0)
        x=x*(-1);
    return x;
};
