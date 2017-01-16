#include "Joueur.h" 

class Partie{
	private:
	int numJoueurActif;
	int numTour;
	bool modeIA;
	
	public:
	Partie();
	~Partie();
	
	void debut();
};
