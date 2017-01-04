#ifndef DEF_FANTA
#define DEF_FANTA

#include <iostream>

#include "unite.h"

using namespace std;

class Fantassin : public Unite {
	public :
		Fantassin(int prix_, int pv_, int attaque_, int joueur_);
		~Fantassin();
		virtual void action();
		virtual void attaquer();
}
#endif