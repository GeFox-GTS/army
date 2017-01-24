#include <iostream>
// #include "Units/Unit.h"
#include "Unit.h"
#include "Soldier.h"
#include "Werewolf.h"
#include "Vampire.h"
#include "Rogue.h"

int main() {
	std::cout << "Launched." << std::endl;
	// Unit ut;
	
	Soldier* s1 = new Soldier();
	Werewolf* w1 = new Werewolf();
	Vampire* v1 = new Vampire();
	Rogue* r1 = new Rogue();

	std::cout << *s1 << std::endl;
	std::cout << *w1 << std::endl;
	std::cout << *v1 << std::endl;
	std::cout << *r1 << std::endl;

	r1->attack(*s1);
	std::cout << *s1 << std::endl;
	std::cout << *v1 << std::endl;

	w1->transform();
	std::cout << *w1 << std::endl;


    delete s1;
    delete w1;
    delete v1;
    delete r1;

    return 0;
}