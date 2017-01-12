#ifndef DEF_SS
#define DEF_SS

#include <iostream>

#include "unite.h"
#include "aire.h"

class SuperSoldat : public Unite {
	public :
		SuperSoldat(int joueur_, int place_);
		~SuperSoldat();
		void action();
		virtual void attaquer(Aire plateau);
};
#endif