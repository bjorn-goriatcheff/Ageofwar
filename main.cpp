#include <iostream>

#include "joueur.cpp"
#include "unite.cpp"
#include "aire.cpp"
#include "fantassin.cpp"


using namespace std;

int main() {
	Aire *plateau = new Aire();

	plateau->affiche();
	
	Joueur jou1 = *new Joueur(1);
	Joueur jou2 = *new Joueur(2);
	jou1.affiche();
	
	Fantassin* f = new Fantassin(1, 0);
	plateau->setCase(0, f);
	//plateau->affiche();
	plateau->attaquer(0, 1);
	
}
