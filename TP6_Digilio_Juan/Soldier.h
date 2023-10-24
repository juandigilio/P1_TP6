#pragma once

#include <iostream>

using namespace std;

class Soldier abstract
{


protected:

	float health;
	float stamin;
	float maxStamin;
	float attack;
	int position;
	bool isAlive;
	string name;


public:

	Soldier(float attack);
	virtual ~Soldier();

	void Rest();
	void SetPosition(int position) { this->position = position; }
	int GetPosition() { return position; }
	float GetHealth() { return health; }
	bool IsAlive() { return isAlive; }
	string GetName() { return name; }
	void GetDamage(float attak);

	virtual void Attack(Soldier* soldiers[], int soldiersQnty) = 0;
};

