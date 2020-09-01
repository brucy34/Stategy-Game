#include <iostream>
#include <string>
#include "Personn.h"
#include "Arme.h"

using namespace std;

int main()
{
    Personnage david, goliath("Epee aiguisee",20);
    //Cr�ation de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david r�cup�re 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath r�attaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?
    goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 40);
    goliath.attaquer(david);
    david.changerArme("Bazooka",90);
    david.attaquer(goliath);

    cout <<"david"<<endl;
    david.afficherEtat();
    cout <<endl<<"goliath"<<endl;
    goliath.afficherEtat();

    return 0;
}
