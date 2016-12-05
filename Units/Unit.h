#ifndef UNIT_H
#define UNIT_H

#include <iostream>

class Unit {
protected:
    std::string name;
    int hitPointLimit;
    int hitPoint;
    int damage;


public:
    Unit(std::string name, int hitPointLimit, int phisycalDamage);
    ~Unit();

    void attack(Unit *enemy);
    void takeDamage(int dmg);

    int getHitPoints();
    
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H