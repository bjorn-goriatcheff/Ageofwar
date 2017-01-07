#include "catapulte.h"

Catapulte::Catapulte(int joueur_, int place_) {
	setPrix(20);
	setPv(12);
	setAttaque(6);
	setJoueur(joueur_);
	setSymbole('C');
	setPlace(place_);
}

Catapulte::~Catapulte() {
	
}

void Catapulte::action() {
	
}

void Catapulte::attaquer() {
	
}