#include "Rogue.h"
#include "Unit.h"

	Rogue::Rogue(int hitPointsLimit, int manaPointsLimit, const std::string  name, int damage){
        ability = new Ability(hitPointsLimit, manaPointsLimit);
        combat = new Combat(damage);

        this->name = name;
        this->type = "Rogue";
        
        if (Unit::debug) {
            std::cout << "Rogue created.(" << this << ")" << std::endl;
        }
	}

	Rogue::~Rogue(){
        if (Unit::debug) {
            std::cout << "Rogue created.(" << this << ")" << std::endl;
        }
	}