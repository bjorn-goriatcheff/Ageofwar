#include "aire.h"
#include "superSoldat.h"

void Unite::deplacer(Aire plateau) {
	if(joueur == 1) {
		if (place >= 11) {
			throw 404;
		}

		else if (plateau.getCase(place).getJoueur() != 0) {
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

		else if (plateau.getCase(place - 2).getJoueur() != 0) {
			throw 405;
		}

		else {
			plateau.setCase(place - 2, this);
			plateau.setCase(place - 1, new Unite());
			place--;
		}
	}
}

void Unite::attaquer(Aire plateau) {
	std::cout << "unite" << std::endl;

	/*if (this->symbole == 'S') {
		if (this->getJoueur() == 1) {
			if (plateau.getCase(this->getPlace()).getJoueur() != 2) {
				throw 808;
			}

			else {
				plateau.cases[this->getPlace()].blessure(this->attaque);
				if (plateau.cases[this->getPlace()].getPv() <= 0) {
					plateau.setCase(this->getPlace(), new Unite());
				}
			}
		}

		if (this->getJoueur() == 2) {
			if (plateau.getCase(this->getPlace() - 2).getJoueur() != 1) {
				std::cout << plateau.getCase(this->getPlace() - 1).getSymbole() << std::endl;
				throw 808;
			}

			else {
				plateau.cases[this->getPlace() - 2].blessure(this->attaque);
				if (plateau.cases[this->getPlace() - 2].getPv() <= 0) {
					plateau.setCase(this->getPlace() - 2, new Unite());
				}
			}
		}
	}

	else if (this->symbole == 'F') {
		if (this->getJoueur() == 1) {
			if (plateau.getCase(this->getPlace()).getJoueur() != 2) {
				throw 808;
			}

			else {
				plateau.cases[this->getPlace()].blessure(this->attaque);
				if (plateau.cases[this->getPlace()].getPv() <= 0) {
					plateau.setCase(this->getPlace(), new Unite());
					int tampon = plateau.cases[this->getPlace() - 1].getPv();
					plateau.setCase(this->getPlace() - 1, new SuperSoldat(1, this->getPlace()));
					plateau.cases[this->getPlace() - 1].setPv(tampon);
				}
			}
		}

		if (this->getJoueur() == 2) {
			if (plateau.getCase(this->getPlace() - 2).getJoueur() != 1) {
				throw 808;
			}

			else {
				plateau.cases[this->getPlace() - 2].blessure(this->attaque);
				if (plateau.cases[this->getPlace() - 2].getPv() <= 0) {
					plateau.setCase(this->getPlace() - 2, new Unite());
					int tampon = plateau.cases[this->getPlace() - 1].getPv();
					plateau.setCase(this->getPlace() - 1, new SuperSoldat(2, this->getPlace()));
					plateau.cases[this->getPlace() - 1].setPv(tampon);
				}
			}
		}
	}*/
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