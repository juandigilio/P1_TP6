#pragma once

#include "Soldier.h"


class Ranged abstract : public Soldier
{
protected:

	int minAttackRange;
	int maxAttackRange;


public:

	Ranged(float attack, int minAttackRange, int maxAttackRange);
	virtual ~Ranged();
};

