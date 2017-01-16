#ifndef DEF_CATA
#define DEF_CATA

#include <iostream>

#include "unite.h"

class Catapulte : public Unite {
	public :
		Catapulte(int joueur_, int place_);
		~Catapulte();
		void action();
		virtual void attaquer();
};
#endif