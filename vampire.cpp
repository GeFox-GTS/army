#include "Vampire.h"
#include "Unit.h"

    Vampire::Vampire(int hitPointsLimit, int manaPointsLimit, const std::string  name, int damage){
        ability = new Ability(hitPointsLimit, manaPointsLimit);
        combat = new Combat(damage);
        this->name = name;
        this->type = "Vampire";

        if (Unit::debug) {
            std::cout << "Vampire Created.(" << this << ")" << std::endl;
        }
    }
    Vampire::~Vampire(){
        if (Unit::debug) {
            std::cout << "Vampire Deleted.(" << this << ")" << std::endl;
        }
    }

    void Vampire::attack(Unit& enemy){
        enemy.takeDamage(this->getDamage());
        enemy.counterAttack(*this);
        ability->setHitPoints(ability->getHitPoints() + 2);
    }