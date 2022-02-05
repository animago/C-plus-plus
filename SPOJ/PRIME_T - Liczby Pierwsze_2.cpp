#include <iostream>
using namespace std;

long int n, a=2, testy, wyniki[100000];
bool jestPierwsza = true;

int main()
{
    cin >> testy;
    for (int i=0; i<testy; i++)
    {
        cin >>n;
        if (n == 0 || n == 1)
        {
            jestPierwsza = false;
            wyniki[i]=0;
        }
        else
        {
            for (a = 2; a <= n / 2; ++a)
            {
                if (n % a == 0)
                {
                    jestPierwsza = false;
                    break;
                }
            }
        }
        if (jestPierwsza==true)
            wyniki[i]=1;
        else
            wyniki[i]=0;
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
