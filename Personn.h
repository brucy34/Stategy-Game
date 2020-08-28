#ifndef PERSONN_H_INCLUDED
#define PERSONN_H_INCLUDED

#include <string>
#include "Arme.h"

class Personnage
{
    public:
        Personnage();
        Personnage(std::string nomArme,int degatsArme);


    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat() const;
    Arme m_arme;

    private:

    int m_vie;
    int m_mana;

};

#endif // PERSONN_H_INCLUDED
