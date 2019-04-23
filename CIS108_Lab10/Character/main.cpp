#include <iostream>
#include<string>
#include "character.h"
#include "dragon.h"
#include "guardian.h"
#include "monster.h"
#include "NPC.h"
#include "townperson.h"
#include "troll.h"

using namespace std;

int main()
{
	// object for dragon
	dragon fire;
	dragon ice;
	dragon stone;

	//object of troll
	troll bridge;
	troll forest;

	//object for townperson
	townperson tp1;
	townperson tp2;
	townperson tp3;
	//object for Guardian 

	guardian g1;
	guardian g2;
	guardian g3;

	//Initialize fire object
	fire.name = "Fire";
	fire.gender = "Male";
	fire.health = 50;
	fire.magicka = 55;

	fire.attack();

	//Initialize ice object
	ice.name = "Ice";
	ice.gender = "Female";
	ice.health = 60;
	ice.magicka = 65;

	ice.attack();

	//Initialize stone object
	stone.name = "Stone";
	stone.gender = "Male";
	stone.health = 70;
	stone.magicka = 75;

	stone.attack();

	//Initialize bridge object
	bridge.name = "Bridge";
	bridge.meanness = 53;
	bridge.attack();

	//Initialize forest object
	forest.name = "Forest";
	forest.meanness = 40;
	forest.attack();

	// Initialize townperson object
    tp1.talk();

	// Initialize 
	//Guardian o  Output “I will defend this place to the death!”
	g1.talk();

	
	/*monster *m;
	m = &bridge;
	m->attack();

	monster m1 = bridge;
	m1.attack();*/



	system("pause");
	return 0;

}
