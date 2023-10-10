#include "Soldier.h"


Soldier::Soldier(float attack)
{
	this->attack = attack;
	health = 100.0f;
	maxStamin = 100.0f;
	stamin = maxStamin;
	cout << "Soldier was created";
}

Soldier::~Soldier()
{
	cout << "Soldier deleted";
}

void Soldier::Rest()
{
	stamin += 40.0f;  
}

void Soldier::GetDamage(float attak)
{
	health -= attack;

	if (health < 0)
	{
		health = 0;
	}
}

