#ifndef DEF_CATA
#define DEF_CATA

#include <iostream>

#include "unite.h"

using namespace std;

class Catapulte : public Unite {
	public :
		Catapulte(int prix_, int pv_, int attaque_, int joueur_);
		~Catapulte();
		virtual void action();
		virtual void attaquer();
}
#endif