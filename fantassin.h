#ifndef DEF_FANTA
#define DEF_FANTA

#include <iostream>


class Fantassin : public Unite {
	public :
		Fantassin(int joueur_, int place_);
		~Fantassin();
		void action();
		virtual void attaquer(int place);
		virtual void getType();
};
#endif
