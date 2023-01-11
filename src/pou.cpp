#include "pou.h"

pou::pou(int n)
{
    reset(n);
}

void pou::reset(int n){
    liczba=0;
}

int pou::sprawdz(){
    return liczba++;
}

int pou::liczba_papu()const {
    return liczba;
}
