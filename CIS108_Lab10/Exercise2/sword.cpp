#include "sword.h"
#include<iostream>
#include<string>
using namespace std;



sword::sword()
{
}

void sword::useItem()
{
	if (name == "broadsword") 
	{
		cout << "The broadsword swings through the air with swiftness! " << endl;
	}
	else if(name == "claymore")
	{
		cout <<  "The claymore jabs the opponent with gusto!" << endl;
	}
	else if(name == "longsword")
	{
		cout << "The longsword cuts the night wind like butter!" << endl;
	}



}


sword::~sword()
{
}


/*Broadsword: Output “The broadsword swings through the air with swiftness!” to the console o  
Claymore: Output “The claymore jabs the opponent with gusto!” to the console o
Longsword: Output “The longsword cuts the night wind like butter!” to the console*/