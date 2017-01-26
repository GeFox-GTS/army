#ifndef WEREWOLF_H

#include <iostream>
#include "Unit.h"

class Werewolf: public Unit {
    protected:
        // bool isTransformed;
        Ability* altAbility;
        Combat* altCombat;

    public:
        Werewolf(int hitPointsLimit=80, int manaPointsLimit=50, const std::string  name="Wolfenstein", int damage=10);
        virtual ~Werewolf();
        
        void transform();
        // void attack(Unit& enemy);
        void takeDamage();
};

#define WEREWOLF_H
#endif //WEREWOLF_H