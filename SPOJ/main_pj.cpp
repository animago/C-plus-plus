#include <iostream>
using namespace std;

int liczba, a=2, testy;
string  wyniki[100000];

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
            wyniki[i]="TAK";
        }
        else
        {
            wyniki[i]="NIE";

        }
    }

    for (int i=0; i<testy; i++)
    {
        cout <<wyniki[i]<< endl;
    }
    return 0;
}
