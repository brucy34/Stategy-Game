#include <iostream>
#include <string>
#include "Personn.h"
#include "Arme.h"

using namespace std;

int main()
{
    Personnage david, goliath("Epee aiguisee",20);
    //Création de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath réattaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);
    david.changerArme("Bazooka",90);
    david.attaquer(goliath);

    cout <<"david"<<endl;
    david.afficherEtat();
    cout <<endl<<"goliath"<<endl;
    goliath.afficherEtat();

    return 0;
}
