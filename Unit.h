#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "Ability.h"
#include "Combat.h"

class Combat;

class Unit {
protected:
	Combat* combat;
	Ability* ability;
	std::string type;
	std::string name;
public:
	static bool debug;

    Unit(int hitPointsLimit=30, int manaPointsLimit=0, const std::string  name="Manticor");
	virtual ~Unit() = 0;

	virtual void attack(Unit& enemy);
	virtual void counterAttack(Unit& enemy);
	virtual void takeDamage(int damage);
	virtual void bite(Unit& enemy);

	void ensureIsAlive();
	const std::string getName() const;
	const std::string getType() const;
    
    const int getHitPointsLimit() const;
    const int getHitPoints() const;
    const int getManaPointsLimit() const;
    const int getManaPoints() const;
    const int getDamage() const;

    void setHitPoints(int hp);
    void setUnitType(std::string type);

};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
