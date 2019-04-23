#pragma once
#include<iostream>
#include<string>
using namespace std;

class item
{
public:
	item();
	string name;
	string description;
	int damage;
	virtual void addItem();
	virtual void useItem();
	~item();
};

