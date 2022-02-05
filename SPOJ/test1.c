#include <iostream>
using namespace std;

int n,a,z;
int main()
{
    cin >>n;
    for (int i=0; i
{
    cin>>a;
    if (a<2)
            z=1;
        if (a==2)
            z=0;
        if (a>2)
        {
            z=0;
            if (a%2==0)
                z+=1;
            for(int j=2; j*j<=a; j++)
                if (a%j==0)
                    z+=1;
        }
        if (z==0)
            cout <<"TAK"< else
                     cout <<"NIE"<

            }
    return 0;

}
