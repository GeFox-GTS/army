#include "Werewolf.h"
#include "Unit.h"
#include "Ability.h"

    Werewolf::Werewolf(int hitPointsLimit, int manaPointsLimit, const std::string  name, int damage){
        ability = new Ability(hitPointsLimit, manaPointsLimit);
        altAbility = new Ability(hitPointsLimit * 2, manaPointsLimit);
        combat = new Combat(damage);
        altCombat = new Combat(damage * 2);

        // this->isTransformed = false;
        this->name = name;
        this->type = "Werewolf";

        if (Unit::debug) {
            std::cout << "Werewolf created.(" << this << ")"<< std::endl;
        }
    }

    Werewolf::~Werewolf(){
        if (Unit::debug) {
            std::cout << "Werewolf deleted.(" << this << ")" << std::endl;
        }
        delete altAbility;
    }
    
    // void Werewolf::transform(){
    //     float coef = (float)altAbility->getHitPointsLimit() / (float)ability->getHitPointsLimit();

    //     Ability* tmp = ability;
    //     Combat* tmpCombat = combat;

    //     altAbility->setHitPoints(ability->getHitPoints() * coef);
    //     ability = altAbility;
    //     altAbility = tmp;

    //     altCombat->setDamage(combat->getDamage() * coef);
    //     combat = altCombat;
    //     altCombat = tmpCombat;
    // }

    void Werewolf::takeDamage(){

    }
