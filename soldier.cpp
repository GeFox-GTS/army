#include "Unit.h"
#include "Soldier.h"

    Soldier::Soldier(int hitPointsLimit, int manaPointsLimit, const std::string  name, int damage){
        ability = new Ability(hitPointsLimit, manaPointsLimit);
        combat = new Combat(damage);
        this->name = name;
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