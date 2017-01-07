#include <iostream>
#include "unite.cpp"
#include "Base.cpp"
#include "Joueur.cpp"
#include "Partie.h"
#include "AirdeJeu.cpp"




Partie::Partie(){
	modeIA=false;
	numTour=0;
	debut();
}


void Partie::debut(){
	//Creation de l'air de jeu
	AirdeJeu* air = new AirdeJeu();
	//Creation des bases
	Base* b1 = new Base(0);
	Base* b2 = new Base(1);
	
	//initialisation du plateau
	air->initAir(b1, b2);
	
	
	//Creation des Joueurs
	Joueur* zero = new Joueur(0);
	Joueur* un = new Joueur(1);
	
	//Gestion de l'or
	zero->setOr(8);
	un->setOr(8);
	
	//Creation des unités
	Unite* u1 = new Unite();
	Unite* u2 = new Unite();
	//placement des unités
	air->initUnit(0, *u1);
	air->initUnit(1, *u2);
	
}

int main(){
	return 0;
}
