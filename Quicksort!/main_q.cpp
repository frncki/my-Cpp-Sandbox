#include "quick.h"

using namespace std;

int main () {

  int num;
  cout << "Ile liczb posortowac? ";
  cin >> num;
  int *A = new int[num];

  for (int i = 0; i < num; i++) {
    cout << "Podaj liczbe: ";
    cin >> A[i];
  }


  quicksort(A, 0, num-1);

  for (int i = 0; i < num; i++) {
    cout << i + 1 << ": " << A[i] << endl;
  }

  delete[] A;

  return 0;
}
