classe Joueur{
	private:
	int numJoueur;
	int or;
	int nb_unit;
	bool isIA;
	
	public:
	Joueur(int num);
	~Joueur();
	
	void setOr(int _or) : {or=_or;};
	
}
