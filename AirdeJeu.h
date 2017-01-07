
class AirdeJeu {
	private:
	//tableau des unités
	Unite tabUnit[12];
	//case de front d'attaque
	int posMaxPlayer1;
	int posMaxPlayer2;
	//Bases des deux joueurs
	Base* baseplayer1;
	Base* baseplayer2;
	
	public:
	AirdeJeu();
	~AirdeJeu();
	
	void initAir(Base* b1, Base* b2);
	void initUnit(int pos, Unite unit);
	bool verifFrontLine();
	
};
