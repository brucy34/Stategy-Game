#include <iostream>
#include <string>
#include "Personn.h"
#include "Arme.h"
using namespace std;

void Personnage::recevoirDegats(int nbDegats)

{
    m_vie  -=nbDegats;

    if (m_vie<0)
    {
        m_vie=0;
    }

}
int Arme::getDegats() const
{
    return m_degats;
}
void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme.getDegats());
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie +=quantitePotion;

    if (m_vie>100)
    {
        m_vie =100;
    }
}
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme.changer(nomNouvelleArme,degatsNouvelleArme);
}
bool Personnage::estVivant()
{
    return m_vie>0;
}
 Personnage::Personnage():m_vie(100),m_mana(100)
{

}
Personnage::Personnage(string nomArme, int degatsArme):m_vie(100),m_mana(100), m_arme(nomArme,degatsArme)
{

}


void Personnage::afficherEtat() const
{
    cout<<"Niveau de vie "<<m_vie<<endl;
    cout<<"Niveau de magie "<<m_mana<<endl;
    m_arme.afficher();
}


