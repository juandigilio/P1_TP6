#pragma once

#include "Melee.h"


class Swordsman : public Melee
{
public:

	Swordsman(float attack, int attackRatio);
	~Swordsman();

	void Attack(Soldier* soldiers[], int soldiersQnty);
};

