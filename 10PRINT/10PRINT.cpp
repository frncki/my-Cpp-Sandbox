#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

double los (void) {
  return ((double) rand () / RAND_MAX);
}

int main () {

  srand (time (NULL));

  char s = 92;

  for(int i = 0; i < 4000; i++) {
    if (los() < 0.5) {
      printf("%c  ", s);
    } else {
      printf("/ ");
    }
  }

}
