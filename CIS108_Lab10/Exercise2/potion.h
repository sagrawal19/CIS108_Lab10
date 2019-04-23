#pragma once
#include "item.h"
class potion :
	public item
{
public:
	potion();
	virtual void useItem();
	~potion();
};

