#include "Unit.h"

    Unit::Unit(std::string name, int hitPointLimit, int phisycalDamage) {
        this->name = name;
        this->hitPointLimit = hitPointLimit;
        this->hitPoint = hitPointLimit;
        this->phisycalDamage = phisycalDamage;
        
    }

    Unit::~Unit() {
        
    }

    void Unit::attack(Unit *enemy) {
        
    }

    void Unit::takeDamage(int dmg) {
        
    }

    std::ostream& operator<<(std::ostream& out, const Unit& unit) {

    }
