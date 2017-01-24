#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"

class Vampire: public Unit{

public:
	Vampire(int hitPointsLimit=60, int manaPointsLimit=50, const std::string  name="Dracula", int damage=20);
	virtual ~Vampire();

	virtual void attack(Unit& enemy);

};

#endif //VAMPIRE_H