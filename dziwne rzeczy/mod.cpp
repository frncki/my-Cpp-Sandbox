#include <iostream>

using namespace std;

int main () {
  srand(time(NULL));
  for (int i = 0; i < 21; i++){
    cout << 2 * ((rand() % 21) - 10) << endl;
  }
  cout << "Nieparzyste:" << endl;
  for (int i = 0; i < 21; i++){
    cout << 2 * ((rand() % 19) - 9) + 1 << endl;
  }
  return 0;
}
