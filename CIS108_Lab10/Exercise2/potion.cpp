#include "potion.h"
#include<iostream>
#include<string>
using namespace std;



potion::potion()
{
}

void potion::useItem()
{
	if (name == "healing")
	{
		cout << "I am feeling much better! " << endl;
	}
	else if (name == "magicka")
	{
		cout << "I am feeling much stronger!" << endl;
	}


}

potion::~potion()
{
}

