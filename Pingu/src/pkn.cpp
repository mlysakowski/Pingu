#include "pkn.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

pkn::pkn(int n)
{
    srand(time(0));
    reset(n);
}

void pkn::reset(int n){
    win=0;
    r=rand()%3;
}

int pkn::ktowygral(int x){
    win ++;
    if((x==1&&r==2)||(x==2&&r==3)||(x==3&&r==1)){
        return (+1);
    }
    else if ((x==1&&r==3)||(x==2&&r==1)||(x==3&&r==2)){
        return (-1);
    }
    else if(x==r){
        return (0);
    }
}

int pkn::iloscwygranych() const{
    return win;
}
