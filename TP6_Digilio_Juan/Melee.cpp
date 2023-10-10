#include "Melee.h"

Melee::Melee(float attack, int attackRatio) : Soldier(attack)
{
	this->attackRatio = attackRatio;

	cout << "It's a melee one, tuf guy...";
}

Melee::~Melee()
{
	cout << "Lo vimi tuf guy";
}
