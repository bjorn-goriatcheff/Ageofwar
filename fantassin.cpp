#include "fantassin.h"

Fantassin::Fantassin(int joueur_, int place_) {
	setPrix(10);
	setPv(10);
	setAttaque(4);
	setJoueur(joueur_);
	setSymbole('F');
	setPlace(place_);
}

Fantassin::~Fantassin() {
	
}

void Fantassin::action() {
	
}

void Fantassin::attaquer(Aire plateau) {
	if (this->getJoueur() == 1) {
		if (plateau.getCase(this->getPlace())->getJoueur() != 2) {
			throw 808;
		}

		else {
			plateau.getCase(this->getPlace())->blessure(this->getAttaque());
		}
	}
}