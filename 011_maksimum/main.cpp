#include <iostream>

using namespace std;

int a,b,c,m;

int main()
{
    cout << "Podaj trzy liczby: " << endl;
    cin >> a >> b >> c;
    cout << endl;
    cout << "liczb a: "<<a<< endl;
    cout << "liczb b: "<<b<< endl;
    cout << "liczb c: "<<c<< endl;
    cout << endl;
    m=a;
    if (b>m) m=b;
    if (c>m) m=c;

    cout << "Najwieksza liczba: "<<m << endl;

    return 0;
}
