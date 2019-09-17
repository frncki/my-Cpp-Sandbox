#include "quick.h"

using namespace std;

int partition(int A[], int p, int r) {

  int x = A[p];
  int i = p - 1, j = r + 1, tmp;

  while (true) {
    while (A[j] > x)
      j--;
    while (A[i] < x)
      i++;
    if (i < j) {
      tmp = A[i];
      A[i] = A[j];
      A[j] = tmp;
      i++;
      j--;
    }
    else
      return j;
  }
}

void quicksort(int A[], int p, int r) {
  int q;
  if (p < r) {
    q = partition(A, p, r);
    quicksort(A, p, q);
    quicksort(A, q + 1, r);
  }
}
