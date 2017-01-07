#include "AirdeJeu.h"

void AirdeJeu::initAir(Base* b1, Base* b2){
	baseplayer1=b1;
	baseplayer2=b2;
	
}
void AirdeJeu::initUnit(int pos, Unite* unit){
	tabUnit[pos] = unit;	
}

bool AirdeJeu::verifFrontLine(){
	if(posMaxPlayer1>=posMaxPlayer2){
		return false;
	}
	else{
		return true;
	}
}

