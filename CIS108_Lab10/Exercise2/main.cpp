#include<iostream>
#include<string>
#include "bow.h"
#include "item.h"
#include "potion.h"
#include "sword.h"
#include "weapon.h"
using namespace std;

int main()
{
		
	// object for sword
	sword broadsword;
	broadsword.name = "broadsword";
	item* i1;
	i1 = &broadsword;
	i1->useItem();


	sword claymore;
	claymore.name = "claymore";
	i1 = &claymore;
	i1->useItem();

	sword longsword;
	longsword.name = "longsword";
	i1 = &longsword;
	i1->useItem();


	//object for bow
	bow longbow;
	longbow.name = "longbow";
	i1 = &longbow;
	i1->useItem();

	bow crossbow;
	crossbow.name = "crossbow";
	i1 = &crossbow;
	i1->useItem();

	//object for potion
	potion healing;
	healing.name = "healing";
	i1 = &healing;
	i1->useItem();

	potion magicka;
	magicka.name = "magicka";
	i1 = &magicka;
	i1->useItem();



	

	system("pause");
	return 0;

}