#include <iostream>

AirdeJeu::initAir(Base b1, Base b2){
	baseplayer1=b1;
	baseplayer2=b2;
	
}
AirdeJeu::initUnit(int pos, Unite unit){
	tabUnit[pos] = unit;	
}

AirdeJeu::verifFrontLine(){
	if(posMaxPlayer1>=posMaxPlayer2){
		return false;
	}
	else{
		return true;
	}
}

