#ifndef _znajdor_h_
#define _znajdor_h_

unsigned int tysiace(unsigned int liczba);

unsigned int setki(unsigned int liczba);

unsigned int setki(unsigned int liczba, unsigned int tysiace);

unsigned int dziesiatki(unsigned int liczba);

unsigned int dziesiatki(unsigned int liczba, unsigned int setki);

unsigned int dziesiatki(unsigned int liczba, unsigned int setki, unsigned int tysiace);

unsigned int jednosci(unsigned int liczba, unsigned int dziesiatki);

unsigned int jednosci(unsigned int liczba, unsigned int dziesiatki, unsigned int setki);

unsigned int jednosci(unsigned int liczba, unsigned int dziesiatki, unsigned int setki, unsigned int tysiace);

#endif
