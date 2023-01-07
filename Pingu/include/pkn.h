#ifndef PKN_H
#define PKN_H
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;


class pkn
{
    private:
        int x,win,r;

    public:
        pkn(int n=3);
        void reset(int n=3);
        int ktowygral(int x);
        int iloscwygranych() const;
};

#endif // PKN_H
