#include "aire.h"

Aire::Aire() {
	for(int i(0); i < 12; i++) {
		setCase(i, new Unite());
	}
}

Aire::~Aire() {

}

Unite *Aire::getCase(int i) {
	return cases;
}

void Aire::setCase(int i, Unite* unite_) {
	cases[i] = *unite_;
}