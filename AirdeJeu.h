#include "unite.h"

class AirdeJeu {
	private:
	//tableau des unités
	Unite[12] tabUnit
	//case de front d'attaque
	int posMaxPlayer1;
	int posMaxPlayer2;
	//Bases des deux joueurs
	Base baseplayer1;
	Base baseplayer2;
	
	public:
	AirdeJeu();
	~AirdeJeu();
	
	void initAir();
	void initUnit(int case);
	bool verifFrontLine();
	
};
