#include<iostream>

using namespace std;

int main() {

  string x;
  string y;
  cout << "HeLLo World! Proszę podać swoje dane:" << endl;
  cout << " Imie: ";
  cin >> x;
  cout << " Nazwisko: ";
  cin >> y;
  string z = x + " " + y;
  cout << " Imie i nazwisko: " << z << endl;

  return 0;
}
