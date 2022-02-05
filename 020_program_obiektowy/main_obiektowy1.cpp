#include <iostream>

using namespace std;

class Zwierze {
public:
  // atrybuty
  string gatunek;
  string imie;
  int wiek;

  // metody
  void dodaj_zwierze() {
    cout << "Dodawanie zwierzecia do bazy:" << endl;
    cout << "Podaj gatunek: ";
    cin >> gatunek;
    cout << "Podaj imię: ";
    cin >> imie;
    cout << "Podaj wiek: ";
    cin >> wiek;
  }
  void daj_glos() {
    if (gatunek == "kot") {
      cout << imie << " lat " << wiek << " Miau!";
    } else if (gatunek == "koza") {
      cout << imie << " lat " << wiek << " Beee!";
    } else if (gatunek == "krowa") {
      cout << imie << " lat " << wiek << " Muuu!";
    } else {
      cout << "Nieznany gatunek!" << endl;
    }
  }
};

int main() {
  Zwierze zwierze1;
  zwierze1.dodaj_zwierze();
  zwierze1.daj_glos();
  Zwierze zwierze1;
  zwierze2.dodaj_zwierze();
  zwierze2.daj_glos();
  return 0;
}
