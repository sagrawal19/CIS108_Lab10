#pragma once
#include "weapon.h"
#include<string>
class sword :
	public weapon
{
public:
	sword();
	virtual void useItem();
	~sword();
};

