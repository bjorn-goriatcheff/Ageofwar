#include "aire.h"
#include "fantassin.h"
#include "archer.h"

using namespace std;

int main() {
	Aire plateau = Aire();
	Fantassin *fanta1 = new Fantassin(1, 3);
	Archer *archer1 = new Archer(2, 4);

	plateau.setCase(archer1->getPlace() - 1, archer1);
	plateau.setCase(fanta1->getPlace() - 1, fanta1);
	try {
		fanta1->attaquer(plateau);
	}
	catch (int e) {}

	for (int i(0); i < 12; i++) {
		if (plateau.getCase(i)->getJoueur() != 0) {
			cout << plateau.getCase(i)->getSymbole() << endl;
		}
		else {
			cout << "X" << endl;
		}
	}

	cout << plateau.getCase(3)->getPv() << endl;
}