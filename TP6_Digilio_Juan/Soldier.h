#pragma once

#include <iostream>

using namespace std;

class Soldier
{
protected:

	float health;
	float stamin;
	float maxStamin;
	float attack;
	int position;


public:

	Soldier(float attack);
	virtual ~Soldier();

	void Rest();
	void SetPosition(int position) { this->position = position; }
	int GetPosition() { return position; }
	float GetHealth() { return health; }
	void GetDamage(float attak);

	virtual void Attack() = 0;
};

