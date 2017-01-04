#ifndef DEF_UNITE
#define DEF_UNITE

#include <iostream>

using namespace std;

class Unite {
	protected :
		int prix;
		int pv;
		int attaque;
		int joueur;
	public :
		Unite(int prix_, int pv_, int attaque_, int joueur_);
		virtual void action();
		virtual void attaquer();
		void deplacer();
}
#endif