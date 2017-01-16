class Joueur{
	private:
	int numJoueur;
	int gold;
	int nb_unit;
	bool isIA;
	
	public:
	Joueur(int num);
	~Joueur();
	
	int getOr();
	int getNum();
	void setOr(int _or)  {
		gold=_or;
	}
	void affiche();
	
};
