#include <iostream>

using namespace std;

int f(int n)
{
    if (n==0) return 3;
    else return f(n-1)+2;
}

long int potega(int p, int w){
    if (w==0) return 1;
    else return  p*potega(p,w-1);
}

int main()
{
    cout << "Funkcja: "<< f(8) << endl;
    cout << "Potegowanie: " << potega(3,4) << endl;
    return 0;
}
