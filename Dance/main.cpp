#include <iostream>
#include "Duree.h"

using namespace std;

int main()
{
     Duree Duree1(0,7,8,9),Duree2(0,5,34,23);

    if(Duree1==Duree2)
    {
        cout <<"Les durees sont egales!"<<endl;
    }
    else
    {
        cout <<"Les durees ne sont pas egales"<<endl;
    }
    return 0;
}
