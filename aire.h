#ifndef DEF_AIRE
#define DEF_AIRE

#include <iostream>
#include <memory>

#include <vector>

class Aire {
	
	private :
		
		std::vector<Unite*> cases;
	public :
		Aire();
		~Aire();
		
		Unite* getCase(int i);
		void setCase(int i, Unite* unite_) ;
		void affiche();
		void attaquer(int place, Joueur joueur);
};
#endif
