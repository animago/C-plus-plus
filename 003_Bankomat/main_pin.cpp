#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Podaj PIN :" << endl;
    cin >> PIN;

    if (PIN=="1234"){
        cout << "PIN jest poprawny!" << endl;
    } else {
         cout << "PIN nie jest poprawny!" << endl;

    }


    return 0;
}
