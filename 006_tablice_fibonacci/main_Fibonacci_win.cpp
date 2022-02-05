#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

long double fib[100000]; int n;

int main()
{
    cout << "Ile liczby ciagu Fibonacciego mam wyznaczyc:" << endl;
    cin >>n ;

    fib[0]=1;
    cout << 1 << " liczba ciagu to: "<< fib[0]<< endl;
    fib[1]=1;
    cout << 2<< " liczba ciagu to: "<< fib[1]<< endl;
    cout<<setprecision(10000);
    for (int i=2 ; i<n; i++){
        fib[i]= fib[i-2]+fib[i-1];
        cout << i+1<< " liczba ciagu to: "<<fib[i]<< endl;
        cout << " zlota liczba to: "<<fib[i-1]/fib[i-2]<< endl;
        Sleep(10);
    }

    return 0;


}
