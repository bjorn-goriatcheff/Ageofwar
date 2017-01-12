#ifndef DEF_UNITE
#define DEF_UNITE

#include <iostream>

class Aire;

class Unite {
	protected :
		int prix;
		int pv;
		int attaque;
		int joueur;
		char symbole;
		int place;
	public :
		void deplacer(Aire plateau);
		virtual void attaquer(Aire plateau);
		void setPrix(int prix_);
		void setPv(int pv_);
		void setAttaque(int attaque_);
		void setJoueur(int joueur_);
		void setSymbole(char symbole_);
		char getSymbole();
		int getJoueur();
		void setPlace(int i);
		int getPlace();
		int getPv();
		int getAttaque();
		void blessure(int att);
};
#endif