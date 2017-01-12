#include "aire.h"
#include "fantassin.h"
#include "archer.h"
#include "superSoldat.h"
#include "catapulte.h"

using namespace std;

int main() {
	Aire *plateau = new Aire();
	/*Fantassin *fanta1 = new Fantassin(2, 4);
	Archer *archer1 = new Archer(1, 3);

	fanta1->setPv(7);

	cout << fanta1->getPv() << endl;*/

	plateau->setCase(3, new Fantassin(2, 4));
	plateau->setCase(2, new Fantassin(2, 4));

	try {
		Unite *test = plateau->getCaseBis(3);
		test->attaquer(*plateau);
	}
	catch (int e) {}
	try {
		plateau->getCaseBis(3)->attaquer(*plateau);
	}
	catch (int e) {}

	plateau->setCase(2, new Fantassin(1, 3));

	try {
		plateau->getCaseBis(3)->attaquer(*plateau);
	}
	catch (int e) {}

	for (int i(0); i < 12; i++) {
		if (plateau->getCase(i).getJoueur() != 0) {
			cout << plateau->getCase(i).getSymbole() << endl;
		}
		else {
			cout << "X" << endl;
		}
	}

	cout << plateau->getCase(2).getPv() << endl;
	cout << plateau->getCase(3).getJoueur() << endl;
}