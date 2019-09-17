#include <iostream>
#include <string>

using namespace std;

void mult (int num1, int num2, int num3, int till) { //nad tym siedzialem najdluzej (znajduje wspolne wielokrotnosci 3 liczb z przedzialu od 0 do till )

  for (int i = 0; i < till+1; i++) {
    if ( i % num1 == 0 && i % num2 == 0 && i % num3 == 0) {
      cout << i << endl;
    }
  }

}

void fw (string p) { //glupia funkcja która żegna zaleznie od odpowiedzi na przywitanie ;p

  if (p == "czesc" || p == "Czesc")
    cout << "Papa :*" << endl;
  else if (p == "hej" || p == "Hej")
    cout << "Pa ;)" << endl;
  else if (p == "hejka" || p == "Hejka")
    cout << "Papatki <3" << endl;
  else if (p == "siema" || p == "Siema" || p == "jol")
    cout << "elo :v" << endl;

}

int main () {

  string p;
  int a, b, c, till;

  cout << "Cześć!" << endl;
  cin >> p;
  cout << "Rozwiązujemy zadanie trzecie ze strony czwartej ze zbioru zadań egzaminacyjnych." << endl << "Podaj proszę interwały czasowe strzałów:" << endl << "" << endl << "Pierwszy: ";
  cin >> a;
  cout << "Drugi:    ";
  cin >> b;
  cout << "Trzeci:   ";
  cin >> c;
  cout << "" << endl;
  cout << "Teraz podaj proszę ile czasu strzelali [w sekundach]: ";
  cin >> till;
  cout << "" << endl;

  cout << "Oto rozwiazanie zadania:" << endl;
  mult(a, b, c, till);
  cout << "" << endl;

  fw(p);
  cout << "" << endl;

  return 0;
}
