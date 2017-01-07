#ifndef DEF_FANTA
#define DEF_FANTA

#include <iostream>

#include "unite.h"
#include "aire.h"

class Fantassin : public Unite {
	public :
		Fantassin(int joueur_, int place_);
		~Fantassin();
		void action();
		void attaquer(Aire plateau);
};
#endif