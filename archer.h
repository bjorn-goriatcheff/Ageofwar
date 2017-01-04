#ifndef DEF_ARCHER
#define DEF_ARCHER

#include <iostream>

#include "unite.h"

using namespace std;

class Archer : public Unite {
	public :
		Archer(int prix_, int pv_, int attaque_, int joueur_);
		~Archer();
		virtual void action();
		virtual void attaquer();
}
#endif