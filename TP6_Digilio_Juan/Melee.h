#pragma once

#include "Soldier.h"

class Melee abstract : public Soldier
{
protected:

	int attackRatio;


public:

	Melee(float attack, int attackRatio);
	virtual ~Melee();

	virtual void Attack(Soldier* soldiers[], int soldiersQnty) = 0;
};

