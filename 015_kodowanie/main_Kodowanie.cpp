#include <iostream>
#include <windows.h>

using namespace std;

//Project -> Project build options -> Compiler Settings
//otwórz zakładkę Other compiler options
//i dodaj opcję kompilatora -fexec-charset=cp852
//na koniec Build -> Rebuild
//i skompilować Build -> Build and run lub F9


string napis;

int main()
{
    system("chcp 1250");
    system("CLS");
    //SetConsoleCP(1250);
    //SetConsoleOutputCP(1250);
    cout << "ąćęłńóśżźĄĆĘŁŃÓŚŻŹ" << endl;
    cout << "ZAŻÓŁĆ GĘŚLĄ JAŹŃ zażółć gęślą jaźń!" << endl;
    getline (std::cin,napis);
    cout << "Podany napis: " << napis<< endl;
    return 0;
}
