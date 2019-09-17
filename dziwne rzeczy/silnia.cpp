#include <iostream>
#include <cmath>

using namespace std;

unsigned int fact (unsigned int num) {

  unsigned int sum = 1;
  for (unsigned int i = 1; i <= num; ++i)
    sum *= i;
  return sum;
}

int main() {

  for (unsigned int i = 0; i < 19; i++)
    cout << fact (i) << endl;

  return 0;
}
