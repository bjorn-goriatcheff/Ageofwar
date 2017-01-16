#include "unite.h"

Unite::Unite() {
	prix=0;
	pv=0;
	place=0;
}

Unite::Unite(int _place) {
	prix=0;
	pv=0;
	place=_place;
	
}


void Unite::deplacer() {
	
	
	
}

void Unite::attaquer(int place) {
	std::cout << "unite" << std::endl;
}
void Unite::getType(){
	std::cout << "unite" << std::endl;
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

void Unite::affiche(){
	std::cout << "case numéro: " << getPlace() << std::endl;
	std::cout << "vie: "<< getPv() << std::endl;
}
