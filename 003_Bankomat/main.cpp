#include <iostream>

using namespace std;

string login;
string pass;

int main()
{
    cout << "Login: ";
    cin >> login;

    cout << "Pass: ";
    cin >> pass;

    if ((login=="admin")&&(pass=="1234")){
        cout << "Zalogowano u¿ytkownika!" << endl;
    } else if ((login=="admin")&&(pass!="1234")){
         cout << "B³êdny has³o!" << endl;
    } else {
         cout << "B³êdny login lub has³o!" << endl;
    }

    return 0;
}
