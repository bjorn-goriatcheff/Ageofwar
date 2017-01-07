#include "aire.h"

void Unite::deplacer(Aire plateau) {
	if(joueur == 1) {
		if (place >= 11) {
			throw 404;
		}

		else if (plateau.getCase(place)->getJoueur() != 0) {
			throw 405;
		}

		else {
			plateau.setCase(place, this);
			plateau.setCase(place - 1, new Unite());
			place++;
		}
	}

	else if (joueur == 2) {
		if (place <= 2) {
			throw 404;
		}

		else if (plateau.getCase(place - 2)->getJoueur() != 0) {
			throw 405;
		}

		else {
			plateau.setCase(place - 2, this);
			plateau.setCase(place - 1, new Unite());
			place--;
		}
	}
}

void Unite::setPrix(int prix_) {
	prix = prix_;
}

void Unite::setPv(int pv_) {
	pv = pv_;
}

void Unite::setAttaque(int attaque_) {
	attaque = attaque_;
}

void Unite::setJoueur(int joueur_) {
	joueur = joueur_;
}

void Unite::setSymbole(char symbole_) {
	symbole = symbole_;
}

char Unite::getSymbole() {
	return symbole;
}

int Unite::getJoueur() {
	return joueur;
}

void Unite::setPlace(int i) {
	place = i;
}

int Unite::getPlace() {
	return place;
}

int Unite::getPv() {
	return pv;
}

int Unite::getAttaque() {
	return attaque;
}

void Unite::blessure(int att) {
	pv -= att;
}