#include <iostream>
#include <string>
#include "Arme.h"

using namespace std;
 Arme::Arme(string nom,int degats):m_nom(nom),m_degats(degats)
{

}
void Arme::changer(string nom,int degats)
{
    m_nom=nom;
    m_degats=degats;
}
void Arme::afficher() const
{
    cout<<"Arme: "<<m_nom<<"( "<<m_degats<<" )"<<endl;
}
 Arme::Arme():m_nom("Epee rouille"),m_degats(10)
{

}

