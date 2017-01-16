class Base {
	private:
	int vie;
	int playernum;
	bool libre;
	
	public:
	Base(int num);
	~Base();
	
	//Set ou Get
	void getLibre(){
		return libre;
	}
	void setLibre(boolean _libre){
		libre=_libre;
	}
	void getPLayernum(){
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
	
