#include <iostream>

using namespace std;

int uczniowie, cukierki, cukierkiUczniowie, cukierkiJas ;

int main()
{
    cout << "Ilu uczniow jest w Twojej klasie?" << endl;
    cout << "podaj liczbe: ";
    cin >> uczniowie;

    cout << "Ilu cukierkow kupila mama?" << endl;
    cout << "podaj liczbe: ";
    cin >> cukierki;

    cukierkiUczniowie = cukierki / (uczniowie-1);

    cout << "Kazdy uczen dostanie po " << cukierkiUczniowie; cout << " szt.";

    cukierkiJas = cukierki -((uczniowie-1)*cukierkiUczniowie);

    cout << "Jasiowi na wieczor zostanie " << cukierkiJas; cout << " szt.";

    return 0;
}
