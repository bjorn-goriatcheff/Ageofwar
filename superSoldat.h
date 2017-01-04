#ifndef DEF_SS
#define DEF_SS

#include <iostream>

#include "unite.h"

using namespace std;

class SuperSoldat : public Unite {
	public :
		SuperSoldat(int prix_, int pv_, int attaque_, int joueur_);
		~SuperSoldat();
		virtual void action();
		virtual void attaquer();
}
#endif