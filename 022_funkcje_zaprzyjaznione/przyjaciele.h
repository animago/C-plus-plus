#include <iostream>

using namespace std;

class Prostokat;

class Punkt {
  string nazwa;
  float x, y;

public:
  Punkt(string = "A", float = 5, float = 5);
  void wczytaj();

  friend void sedzia(Punkt &pkt, Prostokat &p);
};

class Prostokat {
  string nazwa;
  float x, y, szerokosc, wysokosc;

public:
  Prostokat(string = "BOKS", float = 0, float = 0, float = 10, float = 10);
  void wczytaj();

  friend void sedzia(Punkt &pkt, Prostokat &p);
};
