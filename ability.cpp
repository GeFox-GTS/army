#include <iostream>
#include "Ability.h"
#include "Unit.h"

    Ability::Ability(int hitPointsLimit, int manaPointsLimit){
        this->hitPointsLimit = hitPointsLimit;    
        this->hitPoints = hitPointsLimit;
        this->manaPointsLimit = manaPointsLimit;    
        this->manaPoints = manaPointsLimit; 

        if (Unit::debug) {
            std::cout << "Ability created.(" << this << ")" << std::endl;
        }
    }

    Ability::~Ability(){
        if (Unit::debug) {
            std::cout << "Ability deleted.(" << this << ")" << std::endl;
        }

    }

    const int Ability::getHitPointsLimit() const{
        return this->hitPointsLimit;
    }
    const int Ability::getHitPoints() const{
        return this->hitPoints;
    }
    const int Ability::getManaPointsLimit() const{
        return this->manaPointsLimit;
    }
    const int Ability::getManaPoints() const{
        return this->manaPoints;
    }

    void Ability::setHitPointsLimit(int hitPointsLimit){
        this->hitPointsLimit = hitPointsLimit;
    }
    void Ability::setHitPoints(int hitPoints){
        this->hitPoints = hitPoints;
    }
    void Ability::setManaPointsLimit(int manaPointsLimit){
        this->manaPointsLimit = manaPointsLimit;
    }
    void Ability::setManaPoints(int manaPoints){
        this->manaPoints = manaPoints;
    }
