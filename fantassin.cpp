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

void Fantassin::attaquer(int place) {
	std::cout << "fantassin" << std::endl;
}
void Fantassin::getType() {
	std::cout << "fantassin" << std::endl;
}
