#ifndef COMBAT_H
#define COMBAT_H 

class Unit;

class Combat {
protected:
	int damage;
public:
	Combat(int damage);
	~Combat();
	
	const int getDamage() const;

	void setDamage(int damage);
	void attack(Unit& enemy);
	void counterAttack(Unit& unit);
	void takeDamage(int damage, Unit& unit);
};

#endif //COMBAT_H
