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
        cout << "Zalogowano u�ytkownika!" << endl;
    } else if ((login=="admin")&&(pass!="1234")){
         cout << "B��dny has�o!" << endl;
    } else {
         cout << "B��dny login lub has�o!" << endl;
    }

    return 0;
}
