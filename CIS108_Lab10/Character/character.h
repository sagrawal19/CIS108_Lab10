#pragma once
#include <iostream>
#include <string>
using namespace std;

class character
{
	public:
		character();
		~character();
		virtual void attack();

	public:
		string name;
		string gender;
		int health;
		int magicka;		
};


