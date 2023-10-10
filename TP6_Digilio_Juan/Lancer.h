#pragma once

#include "Melee.h"


class Lancer : public Melee 
{
public:

	Lancer(float attack, int attackRatio);
	~Lancer();

	void Attack(Soldier* soldiers[], int soldiersQnty);
};

