#ifndef DEF_AIRE
#define DEF_AIRE

#include <iostream>

#include "unite.h"

class Aire {
	private :
		Unite* cases = new Unite[12];
	public :
		Aire();
		~Aire();
		Unite* getCase(int i);
		void setCase(int i, Unite* unite_);
};
#endif