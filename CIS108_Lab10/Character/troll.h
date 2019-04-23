#pragma once
#include <iostream>
#include<string.h>
#include "monster.h"
using namespace std;


class troll:public monster
{
	
public:
	troll();
	virtual void attack();
	~troll();
public:
	int meanness;
	
};

// Trolls o  If Troll meanness < 50%: 
//§  Bridge Troll: Output “Troll <name> demands that you pay to cross the bridge” to the console § 
//Forest Troll: Output “Troll <name> demands that you pay to enter the forest” to the console o 
//Else §  Bridge Troll: Output “Troll <name> shakes the bridge as you cross” to the console §
//Forest Troll: Output “Troll <name> swings a tree trunk at you” to the console   