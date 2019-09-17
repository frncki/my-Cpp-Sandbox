#include <iostream>
#include "znajdor.h"

using namespace std;

int main () {

  bool wybor = true;

  while(wybor == true) {

    switch(wybor) {

      case true:
        unsigned int liczba;
        cout << "Podaj liczbe: ";
        cin >> liczba;

        if (liczba > 999 && liczba < 10000) {

          unsigned int toussen = tysiace(liczba);
          unsigned int hunnder = setki(liczba, toussen);
          unsigned int tenner = dziesiatki(liczba, hunnder, toussen);
          unsigned int onner = jednosci(liczba, tenner, hunnder, toussen);
          cout << "Liczba jednosci: " << onner << endl << "Liczba dziesiatek: " << tenner << endl << "Liczba setek: " << hunnder << endl << "Liczba tysiecy: " << toussen << endl;

        } else if (liczba > 99 && liczba < 1000) {

          unsigned int hunnder = setki(liczba);
          unsigned int tenner = dziesiatki(liczba, hunnder);
          unsigned int onner = jednosci(liczba, tenner, hunnder);
          cout << "Liczba jednosci: " << onner << endl << "Liczba dziesiatek: " << tenner << endl << "Liczba setek: " << hunnder << endl;

        } else if (liczba > 9 && liczba < 100) {

          unsigned int tenner = dziesiatki(liczba);
          unsigned int onner = jednosci(liczba, tenner);
          cout << "Liczba jednosci: " << onner << endl << "Liczba dziesiatek: " << tenner << endl;

        } else {
          cout << "Wartosc nie obslugiwana!" << endl;
        }

        cout << endl << "[1] JESZCZE RAZ!" << endl << "[0] exit" << endl;
        cin >> wybor;

      break;

      case false:
        return 1;
      break;

      default:
        cout << "Nie ma takiego wyboru." << endl;
        wybor = true;
      break;
    }
  }
  return 0;
}
