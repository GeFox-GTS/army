#ifndef SOLDIER_H
#include "Unit.h"

class Soldier: public Unit {

public:
    Soldier(int hitPointsLimit=100, int manaPointsLimit=0, const std::string  name="Bilko", int damage=15);
    virtual ~Soldier();
    
    // void attack(Unit& enemy);
    // void takeDamage();
};

#define SOLDIER_H
#endif //SOLDIER_H