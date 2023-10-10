#include "Lancer.h"

Lancer::Lancer(float attack, int attackRatio) : Melee(attack, attackRatio)
{
	cout << "I'm a Roman legionary, get ready to feel the power of my lance!" << endl;
}

Lancer::~Lancer()
{
	cout << "The spear turned into a wand" << endl;
}

void Lancer::Attack(Soldier* soldiers[], int soldiersQnty)
{
	if (stamin < 10.0f)
	{
		cout << "Not enough stamina, soldier need to rest..." << endl;
		Rest();
	}
	else
	{
		int toAttack;

		stamin -= 10.0f;

		do
		{
			toAttack = rand() % soldiersQnty;

		} while (toAttack == position);

		cout << "Soldier " << position << " attacks soldier " << toAttack << endl;

		if (abs(position - toAttack) <= attackRatio)
		{
			int totalSoldiersToAttack = abs(position - toAttack);

			if (toAttack < position)
			{
				for (int i = position - 1; i > toAttack - 1; i--)
				{
					soldiers[i]->GetDamage(attack / totalSoldiersToAttack);
					totalSoldiersToAttack--;

					cout << "Attack landed with " << attack << " points of damage, soldier " << i << " current life is " << soldiers[i]->GetHealth() << endl << endl;
				}
			}
		}
		else
		{
			cout << "Miss shot, the target was out of range" << endl << endl;
		}
	}

}
