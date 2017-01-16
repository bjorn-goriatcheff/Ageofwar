#include "joueur.h"


Joueur::Joueur(int num){
	numJoueur=num;
	nb_unit=0;
	gold=8;
	isIA=1;
}

Joueur::~Joueur(){
	delete this;
}
int Joueur::getOr(){
	return gold;
}
int Joueur::getNum(){
	return numJoueur;
}

void Joueur::affiche(){
	std::cout << "gold: " << getOr() << std::endl;
}
