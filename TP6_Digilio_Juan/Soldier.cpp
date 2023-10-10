#include "Soldier.h"


Soldier::Soldier(float attack)
{
	this->attack = attack;
	health = 100.0f;
	maxStamin = 100.0f;
	stamin = maxStamin;
	isAlive = true;
	cout << "Soldier was created" << endl;
}

Soldier::~Soldier()
{
	cout << "Soldier deleted" << endl;
}

void Soldier::Rest()
{
	stamin += 40.0f;  
}

void Soldier::GetDamage(float attack)
{
	health -= attack;

	if (health <= 0)
	{
		health = 0;

		isAlive = false;
	}
}