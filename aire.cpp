#include "aire.h"


Aire::Aire() {
	cases = *new std::vector<Unite*>(12);
	for(int i(0); i < 12; i++) {
		Unite* u = new Unite(i);
		this->setCase(i, u);
	}
}

Aire::~Aire() {

	delete this;
}

Unite* Aire::getCase(int i) {
	return cases[i];
}


void Aire::setCase(int i, Unite* unite_) {
	cases[i]= unite_;
}

void Aire::affiche(){
	std::cout << "affichage du plateau de jeu \n" << std::endl;
	for(int k(0); k<12; k++){
		cases[k]->getType();
		cases[k]->affiche();
	}
}

void Aire::attaquer(int place, Joueur joueur){
	Unite* u = this->getCase(place);
	if(u->getJoueur() != joueur.getNum()){
		throw 405;
	}
	else{
		u->attaquer(place);
	}
	
}
