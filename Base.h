class Base {
	private:
	int vie;
	int playernum;
	bool libre;
	
	public:
	Base(int num);
	~Base();
	
	//Set ou Get
	bool getLibre(){
		return libre;
	}
	void setLibre(bool _libre){
		libre=_libre;
	}
	int getPLayernum(){
		return playernum;
	}
	void setPlayernum(int num){
		playernum=num;
	}
	void setVie(int _vie){
		vie=_vie;
	}
	void baisseVie(int baisse){
		vie-=baisse;
	}
};
	
