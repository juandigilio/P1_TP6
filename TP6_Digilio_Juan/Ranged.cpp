#include "Ranged.h"

Ranged::Ranged(float attack, int minAttackRange, int maxAttackRange) : Soldier(attack)
{
	this->minAttackRange = minAttackRange;
	this->maxAttackRange = maxAttackRange;

	cout << "You are a chicken McFly";
}

Ranged::~Ranged()
{
	cout << "Died as a coward";
}
