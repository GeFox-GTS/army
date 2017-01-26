#include "Unit.h"
#include "Berserker.h"

	Berserker::Berserker(int hitPointsLimit, int manaPointsLimit, const std::string name, int damage){
        ability = new Ability(hitPointsLimit, manaPointsLimit);
        altAbility = new Ability(hitPointsLimit * 2, manaPointsLimit);
        combat = new Combat(damage);
        altCombat = new Combat(damage * 2);
        
        this->name = name;
        this->type = "Berserker";
        
        if (Unit::debug) {
            std::cout << "Berserker created.(" << this << ")" << std::endl;
        }
	}
	Berserker::~Berserker(){
        if (Unit::debug) {
            std::cout << "Berserker deleted.(" << this << ")" << std::endl;
        }
	}