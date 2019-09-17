#include <iostream>
#include <cmath>
#include "znajdor.h"

using namespace std;

unsigned int tysiace(unsigned int liczba) {return(floor(liczba/1000));}

unsigned int setki(unsigned int liczba) {return(floor(liczba/100));}

unsigned int setki(unsigned int liczba, unsigned int tysiace) {return(floor(liczba/100) - tysiace*10);}

unsigned int dziesiatki(unsigned int liczba) {return(floor(liczba/10));}

unsigned int dziesiatki(unsigned int liczba, unsigned int setki) {return(floor(liczba/10) - 10*setki);}

unsigned int dziesiatki(unsigned int liczba, unsigned int setki, unsigned int tysiace) {return(floor(liczba/10) - 10*setki - 100*tysiace);}

unsigned int jednosci(unsigned int liczba, unsigned int dziesiatki) {return (liczba - dziesiatki*10);}

unsigned int jednosci(unsigned int liczba, unsigned int dziesiatki, unsigned int setki) {return (liczba - 10*dziesiatki - 100*setki);}

unsigned int jednosci(unsigned int liczba, unsigned int dziesiatki, unsigned int setki, unsigned int tysiace) {return (liczba - 10*dziesiatki - 100*setki - 1000*tysiace);}
