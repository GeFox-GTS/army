#include "Combat.h"
#include "Unit.h"

    Combat::Combat(int damage) {
        this->damage = damage;

        if (Unit::debug) {
            std::cout << "Combat created.(" << this << ")" << std::endl;
        }
    }
    Combat::~Combat(){
        if (Unit::debug) {
            std::cout << "Combat deleted.(" << this << ")" << std::endl;
        }
    }

    const int Combat::getDamage() const{
        return this->damage;
    }

    void Combat::setDamage(int damage){
        this->damage = damage;
    }

    void Combat::attack(Unit& enemy){
        enemy.takeDamage(this->damage);
    }

    void Combat::takeDamage(int damage, Unit& unit){
        if (damage >= unit.getHitPoints()) {
            unit.setHitPoints(0);
        } else {
            unit.setHitPoints(unit.getHitPoints() - damage);
        }
    }

    void Combat::counterAttack(Unit& unit){
        if (unit.getType() != "Rogue") {
            unit.takeDamage(this->damage / 2);
        }
    }
