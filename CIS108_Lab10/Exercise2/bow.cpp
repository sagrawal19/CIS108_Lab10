#include "bow.h"
#include<iostream>
#include<string>
using namespace std;



bow::bow()
{
}
void bow::useItem()
{
	if (name == "longbow")
	{
		cout << "The arrow meets its target! " << endl;
	}
	else if (name == "crossbow")
	{
		cout << "The arrow falls short of its target!" << endl;
	}
	

}

bow::~bow()
{
}

