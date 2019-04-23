#pragma once
#include "NPC.h"
#include<iostream>
#include<string>
using namespace std;


class guardian : NPC
{
public:
	guardian();
	virtual void talk();
	~guardian();
};

