#include "ZFraction.h"
#include <iostream>
using namespace std;

int pgcd(int a, int b)
{
    while(b!=0)
    {
        const int t=b;
        b=a%b;
        a=t;
    }
    return a;
}
ZFraction::ZFraction(int numerateur,int denominateur):m_numerateur(numerateur),m_denominateur(denominateur)
{
   simplifie();
}

void ZFraction::ZFraction (int entier):m_numerateur(entier),m_denominateur(1)
{
      cout <<Zfraction<<endl;
}
void ZFraction::ZFraction():m_numerateur(0),m_denominateur(1)
{
      cout<<ZFraction<<endl;
}
void ZFraction::affiche(ostream& flux)const
{
    if(m_denominateur==1)
    {
        flux<<m_numerateur;
    }
    else
    {
        flux<<m_numerateur<<"/"m_denominateur;
    }
}
void ZFraction::ZFraction afficher(ostream& flux)const
    {
     flux<<a<<"+"<<b<<"="<<c;
     flux<<a<<"*"<<b<<"="<<d;
    }
 void ZFraction::egalite(ostream& flux)const
        {
        flux <<"Les deux fractions sont egales";
        }

ostream& operator<<ostream& flux,ZFraction const& fraction
{
    fraction.affiche(flux);
    return flux;
}


