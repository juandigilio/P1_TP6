#pragma once

#include "Ranged.h"


class Archer : public Ranged
{
public:

	Archer(float attack, int minAttackRange, int maxAttackRange);
	~Archer();

	void Attack(Soldier* soldiers[], int soldiersQnty);
};

