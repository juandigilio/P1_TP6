#pragma once

#include "Soldier.h"

class Melee : public Soldier
{
protected:

	int attackRatio;


public:

	Melee(float attack, int attackRatio);
	virtual ~Melee();
};
