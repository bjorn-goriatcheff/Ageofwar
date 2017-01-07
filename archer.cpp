#include "archer.h"

Archer::Archer(int joueur_, int place_) {
	setPrix(12);
	setPv(8);
	setAttaque(3);
	setJoueur(joueur_);
	setSymbole('A');
	setPlace(place_);
}

Archer::~Archer() {
	
}

void Archer::action() {
	
}

void Archer::attaquer() {
	
}