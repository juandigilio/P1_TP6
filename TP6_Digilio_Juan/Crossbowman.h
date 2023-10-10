#pragma once

#include "Ranged.h"


class Crossbowman : public Ranged
{
protected:

	int hittingChances;


public:

	Crossbowman(float attack, int minAttackRange, int maxAttackRange);
	~Crossbowman();

	void Attack(Soldier* soldiers[], int soldiersQnty);
};

