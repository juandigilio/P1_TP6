#include "Archer.h"

Archer::Archer(float attack, int minAttackRange, int maxAttackRange) : Ranged(attack, minAttackRange, maxAttackRange)
{
	cout << "I'm Genghis Khan, first khagan of the Mongol Empire" << endl;
}

Archer::~Archer()
{
	cout << "No more arrows for Genghis Khan..." << endl;
}

void Archer::Attack(Soldier* soldiers[], int soldiersQnty)
{
	int toAttack;

	if (stamin < 10.0f)
	{
		cout << "Not enough stamina, soldier need to rest..." << endl;
		Rest();
	}
	else
	{
		stamin -= 10.0f;

		do
		{
			toAttack = rand() % soldiersQnty;

		} while (toAttack == position);

		cout << "Soldier " << position << " attacks soldier " << toAttack << endl;

		if (abs(position - toAttack) <= attackRatio)
		{
			soldiers[toAttack]->GetDamage(attack);

			cout << "Attack landed with " << attack << " points of damage, soldier " << toAttack << " current life is " << soldiers[toAttack]->GetHealth() << endl << endl;
		}
		else
		{
			cout << "Miss shot, the target was out of range" << endl << endl;
		}
	}
}
