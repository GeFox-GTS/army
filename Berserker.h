#ifndef BERSERKER_H
#include "Unit.h"

class Berserker: public Unit {

public:
	Berserker(int hitPointsLimit=80, int manaPointsLimit=0, const std::string name="Taurus", int damage=20);
	virtual ~Berserker();
	
};

#define BERSERKER_H
#endif //BERSERKER_H