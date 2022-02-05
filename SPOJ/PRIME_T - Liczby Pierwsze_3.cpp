#include <iostream>
using namespace std;

int liczba, a=2, testy;
int  wyniki[100000];

int main()
{
    cin >> testy;
    for (int i=0; i<testy; i++)
    {
        cin >>liczba;

        while(liczba%a!=0 && a<liczba)
        {
            a++;
        }

        if (a==liczba)
        {
            wyniki[i]=1;
        }
        else
        {
            wyniki[i]=0;

        }
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
