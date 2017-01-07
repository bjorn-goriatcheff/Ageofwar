class Joueur{
	private:
	int numJoueur;
	int orr;
	int nb_unit;
	bool isIA;
	
	public:
	Joueur(int num): numJoueur(num){};
	~Joueur();
	
	void setOr(int _or)  {orr=_or;}
	
};
