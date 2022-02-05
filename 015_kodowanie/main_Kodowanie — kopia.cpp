#include <iostream>
#include <windows.h>

using namespace std;

//Project -> Project build options -> Compiler Settings
//otwórz zak³adkê Other compiler options
//i dodaj opcjê kompilatora -fexec-charset=cp852
//na koniec Build -> Rebuild
//i skompilowaæ Build -> Build and run lub F9


string napis;

int main()
{
    system("chcp 1250");
    system("CLS");
    //SetConsoleCP(1250);
    //SetConsoleOutputCP(1250);
    cout << "¹æê³ñóœ¿Ÿ¥ÆÊ£ÑÓŒ¯" << endl;
    cout << "ZA¯Ó£Æ GÊŒL¥ JAÑ za¿ó³æ gêœl¹ jaŸñ!" << endl;
    getline (std::cin,napis);
    cout << "Podany napis: " << napis<< endl;
    return 0;
}
