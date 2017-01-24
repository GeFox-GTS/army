#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"

class Rogue: public Unit {
public:
	Rogue(int hitPointsLimit=50, int manaPointsLimit=0, const std::string  name="Robin", int damage=15);
	~Rogue();
	
};


#endif //ROGUE_H