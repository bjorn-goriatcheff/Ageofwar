#ifndef DEF_AIRE
#define DEF_AIRE

#include <iostream>
#include<vector>
#include <memory>

#include "unite.h"

class Aire {
	friend class Unite;
	private :
		/*Unite** cases = new Unite*[12];*/
		std::vector<std::shared_ptr<Unite>> cases;
	public :
		Aire();
		~Aire();
		Unite getCase(int i);
		std::shared_ptr<Unite> getCaseBis(int i);
		void setCase(int i, std::shared_ptr<Unite> unite_);
};
#endif