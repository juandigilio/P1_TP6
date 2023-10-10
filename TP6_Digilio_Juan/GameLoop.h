#pragma once

#include "Soldier.h"
#include "Swordsman.h"
#include "Lancer.h"
#include "Archer.h"
#include "Crossbowman.h"


class GameLoop
{
protected:

	int soldiersQnty;
	Soldier* soldiers[10];

public:

	GameLoop();
	~GameLoop();

	void Play();
	void ReorderSoldiers();
};

