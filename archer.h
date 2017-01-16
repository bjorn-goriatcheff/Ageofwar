#ifndef DEF_ARCHER
#define DEF_ARCHER

#include <iostream>

class Archer : public Unite {
	public :
		Archer(int joueur_, int place_);
		~Archer();
		void action();
		virtual void attaquer();
};
#endif
