#pragma once
#include "NPC.h"
#include<iostream>
#include<string>
using namespace std;

class townperson : NPC
{
public:
	townperson();
	virtual void talk();
	~townperson();
};

