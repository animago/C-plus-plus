#include <iostream>

using namespace std;

int f(int n)
{
    if (n==0) return 3;
    else return f(n-1)+2;
}

long int potega(int p, int w)
{
    if (w==0) return 1;
    else return  p*potega(p,w-1);
}

long int fib(int n)
{
    if (n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}

long int silnia(int n)
{
    if (n==0) return 1;
    else return n*silnia(n-1);
}


int main()
{
    cout << "Funkcja f(9): "<< f(9) << endl;
    cout << "Potegowanie potega(9,9): " << potega(9,9) << endl;
    cout << "Fibnonnaci fib(33): " << fib(33) << endl;
    cout << "Silnia(27): " << silnia(27) << endl;
    return 0;
}
