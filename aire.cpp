#include "aire.h"

Aire::Aire() {
	cases.resize(12);
	for(int i(0); i < 12; i++) {
		setCase(i, new Unite());
	}
}

Aire::~Aire() {

}

Unite Aire::getCase(int i) {
	return *cases[i];
}

std::shared_ptr<Unite> Aire::getCaseBis(int i) {
	return cases[i];
}

void Aire::setCase(int i, std::shared_ptr<Unite> unite_) {
	cases[i] = unite_;
}