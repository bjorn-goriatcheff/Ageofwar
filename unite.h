#ifndef DEF_UNITE
#define DEF_UNITE

class Unite {
	protected :
		int prix;
		int pv;
		int attaque;
		int joueur;
		char symbole;
		int place;
	public :
		Unite();
		Unite(int place);
		
		void deplacer();
		virtual void attaquer(int place) ;
		virtual void getType();
		void setPrix(int prix_);
		void setPv(int pv_);
		void setAttaque(int attaque_);
		void setJoueur(int joueur_);
		void setSymbole(char symbole_);
		char getSymbole();
		int getJoueur();
		void setPlace(int i);
		int getPlace();
		int getPv();
		int getAttaque();
		void blessure(int att);
		void affiche();
};
#endif
