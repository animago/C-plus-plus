#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;


void SetCP1250()
{
    SetConsoleCP( 1250 );
    SetConsoleOutputCP( 1250 );
    setlocale( LC_ALL, "1250" );
}




char *tr(char *str)
{
    static char buff[256];
    char cp[]="\245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215ąćęłńóśżźĄĆĘŁŃÓŚŻŹ";
    if(strlen(str)>=sizeof(buff)) return str;
    char *bf=buff;
    while(*str)
    {
        char *pos=strchr(cp+18,*str);
        *(bf++)=pos?*(pos-18):*str;
        ++str;
    }
    *bf=0;
    return buff;
}

string napis;

int main()
{
    SetCP1250();

    cout << tr("ąćęłńóśżźĄĆĘŁŃÓŚŻŹ") << endl;
    cout << tr("ZAŻÓŁĆ GĘŚLĄ JAŹŃ zażółć gęślą jaźń!") << endl;
    cout << "ąćęłńóśżźĄĆĘŁŃÓŚŻŹ" << endl;
    cout << "ZAŻÓŁĆ GĘŚLĄ JAŹŃ zażółć gęślą jaźń!" << endl;
    getline (std::cin,napis);
    cout << "Podany napis: " << napis<< endl;
    return 0;
}
