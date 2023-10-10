#include "Ranged.h"

Ranged::Ranged(float attack, int minAttackRange, int maxAttackRange) : Soldier(attack)
{
	this->minAttackRange = minAttackRange;
	this->maxAttackRange = maxAttackRange;

	cout << "It's a range soldier" << endl;
}

Ranged::~Ranged()
{
	cout << "Died as a coward" << endl;
}
