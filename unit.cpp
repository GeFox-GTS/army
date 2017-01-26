#include "Unit.h"

    bool Unit::debug = false;

    Unit::Unit(int hitPointsLimit, int manaPointsLimit, std::string name){
        if (Unit::debug) {
            std::cout << "Unit Created.(" << this << ")" << std::endl;
        }
    }
    
    Unit::~Unit(){
        if (Unit::debug) {
            std::cout << "Unit Deleted.(" << this << ")"<< std::endl;
        }

        delete ability;
    }

    const std::string Unit::getName() const{
        return this->name;
    }
    const std::string Unit::getType() const{
        return this->type;
    }
    const int Unit::getHitPointsLimit() const{
        return ability->getHitPointsLimit();
    }
    const int Unit::getHitPoints() const{
        return ability->getHitPoints();
    }
    const int Unit::getManaPointsLimit() const{
        return ability->getManaPointsLimit();
    }
    const int Unit::getManaPoints() const{
        return ability->getManaPoints();
    }
    const int Unit::getDamage() const{
        return combat->getDamage();
    }

    void Unit::takeDamage(int damage){
        combat->takeDamage(damage, *this);
    }
    void Unit::attack(Unit& enemy){
        enemy.takeDamage(this->getDamage());
        enemy.counterAttack(*this);
    }
    void Unit::counterAttack(Unit& enemy){
        combat->counterAttack(enemy);
    }
    void Unit::bite(Unit& enemy){
        if (this->type == "Werewolf" || this->type == "Vampire") {
            enemy.setUnitType(this->type);
        }
    }

    void Unit::setHitPoints(int hp){
        ability->setHitPoints(hp);
    }
    void Unit::setUnitType(std::string type){
        this->type = type;
    }

    std::ostream& operator<<(std::ostream& out, const Unit& unit){
        out << "Type: " << unit.getType() << " ";
        out << "Name: " << unit.getName() << "\n";
        out << "HP: " << unit.getHitPoints() << "/" << unit.getHitPointsLimit() << "\n";
        out << "MP: " << unit.getManaPoints() << "/" << unit.getManaPointsLimit() << "\n";
        out << "Damage: " << unit.getDamage();
        return out;
    }