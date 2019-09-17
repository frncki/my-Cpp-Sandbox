#include <iostream>

using namespace std;

int main() {

  float loty[] = {11.1, 0.3, 3.1, 8.5, 5.4};
  float min;
  float max;

  for (int i = 5; i > -1; i--) {
    if (loty[i] < loty[i-1] && loty[i] < loty[i+1]) {
      min = loty[i];
    } else if (loty[i] > loty[i-1] && loty[i] > loty[i+1]) {
      max = loty[i];
    }
  }

  cout << endl << min <<  " " << max << endl;

  return 0;
}
