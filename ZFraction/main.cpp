#include <iostream>
#include "ZFraction.h"

using namespace std;

int main()
{
    ZFraction a(4,5);
    ZFraction b(2);
    ZFraction c,d;
    c=a+b;
    d=a*b;

    if(a>b)
    {
        b.estPlusPetitQue(a);
    }
    else if(a<b)
    {
        a.estPlusPetitQue(b);
    }
    else
    {
      cout<<"Les deux fractions sont egales."<<endl;
    }
    return 0;
}
