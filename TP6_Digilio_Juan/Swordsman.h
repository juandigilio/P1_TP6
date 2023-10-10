#pragma once

#include "Melee.h"


class Swordsman : Melee
{
public:

	Swordsman(float attack, int attackRatio);
	~Swordsman();

	void Attack(Soldier* soldiers[], int soldiersQnty);
};

