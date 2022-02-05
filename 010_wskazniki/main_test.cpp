#include <iostream>

using namespace std;

int ile;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin>>ile;

    int *tablica;
    tablica = new int [ile];

    for (int i=0; i<ile; i++)
    {
        printf("%p", tablica);
        cout<<endl;
        cout<<tablica<<endl;
        tablica++;
    }

    delete [] tablica;

    return 0;
}

