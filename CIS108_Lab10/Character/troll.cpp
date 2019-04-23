#include "troll.h"



troll::troll()
{
	
}

void troll																												::attack()
{	
	if (meanness < 50)
	{
		if (name == "Bridge")
		{

			cout << "Troll " << name << " demands that you pay to cross the bridge" << endl;
		}
		else
		{
			cout << "Troll " << name << " shakes the bridge as you cross" << endl;
		}
		if (name == "Forest")
		{
			cout << "Troll" << name << "demands that you pay to enter the forest" << endl;
		}
		else
		{
			cout << "Troll" << name << "swings a tree trunk at you" << endl;
		}
	}
	
	



}


troll::~troll()
{
}
