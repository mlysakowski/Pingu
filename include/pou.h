#ifndef POU_H
#define POU_H
#include <ctype.h>


class pou
{
    private:
        int x,liczba;

    public:
        pou(int n=0);
        void reset(int n=0);
        int liczba_papu() const;
        int sprawdz();

};

#endif // POU_H
