#include <iostream>
// #include "Units/Unit.h"
#include "Unit.h"
#include "Soldier.h"
#include "Werewolf.h"
#include "Vampire.h"

int main() {
	std::cout << "Launched." << std::endl;
	// Unit ut;
	
	Soldier* s1 = new Soldier();
	Werewolf* w1 = new Werewolf();
	Vampire* v1 = new Vampire();

	std::cout << *s1 << std::endl;
	std::cout << *w1 << std::endl;
	std::cout << *v1 << std::endl;
	
	v1->attack(*s1);
	std::cout << *s1 << std::endl;
	std::cout << *v1 << std::endl;

	w1->transform();
	std::cout << *w1 << std::endl;

    delete s1;
    delete w1;

    return 0;
}