#include <iostream>

using namespace std;

//Project -> Project build options -> Compiler Settings
//otw�rz zak�adk� Other compiler options
//i dodaj opcj� kompilatora -fexec-charset=cp852
//na koniec Build -> Rebuild
//i skompilowa� Build -> Build and run lub F9


string napis;

int main()
{
    cout << "����󜿟��ʣ�ӌ��" << endl;
    cout << "ZA�ӣ� GʌL� JA�� za��� g�l� ja��!" << endl;
    getline (std::cin,napis);
    cout << "Podany napis: " << napis<< endl;
    return 0;
}
