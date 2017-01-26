#include "Unit.h"
#include "Soldier.h"

    Soldier::Soldier(int hitPointsLimit, int manaPointsLimit, const std::string  name, int damage){
        ability = new Ability(hitPointsLimit, manaPointsLimit);
        altAbility = new Ability(hitPointsLimit * 2, manaPointsLimit);
        combat = new Combat(damage);
        altCombat = new Combat(damage * 2);

        this->name = name;
        this->type = "Soldier";
        if (Unit::debug) {
            std::cout << "Soldier created.(" << this << ")" << std::endl;
        }

    }
    Soldier::~Soldier(){
        if (Unit::debug) {
            std::cout << "Soldier deleted.(" << this << ")" << std::endl;
        }

    }

    // void Soldier::attack(Unit& enemy){

    // }

    // void Soldier::takeDamage(){

    // }