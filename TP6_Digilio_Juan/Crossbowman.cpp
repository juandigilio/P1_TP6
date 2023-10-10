#include "Crossbowman.h"

Crossbowman::Crossbowman(float attack, int minAttackRange, int maxAttackRange) : Ranged(attack, minAttackRange, maxAttackRange)
{
	name = "Trevor the crossbowman";
	cout << "I'm Trevor, the honorable first crossbowman of the royal family" << endl;
}

Crossbowman::~Crossbowman()
{
	cout << "Royalty fell down, and so did Trevor..." << endl << endl;
}

void Crossbowman::Attack(Soldier* soldiers[], int soldiersQnty)
{
	int toAttack;
	bool posibleAttack = false;

	if (stamin < 15.0f)
	{
		cout << "Not enough stamina, soldier need to rest..." << endl;
		Rest();
	}
	else
	{
		stamin -= 15.0f;

		for (int i = 0; i < soldiersQnty; i++)
		{
			if (!position)
			{
				if (abs(position - i) <= maxAttackRange && abs(position - i) >= minAttackRange)
				{
					posibleAttack = true;
				}
			}
		}

		do
		{
			toAttack = rand() % soldiersQnty;

		} while (toAttack == position);

		cout << name << " attacks " << soldiers[toAttack]->GetName() << endl;

		if (posibleAttack)
		{
			if (abs(position - toAttack) <= maxAttackRange && abs(position - toAttack) >= minAttackRange)
			{
				for (int i = 0; i < 2; i++)
				{
					if ((rand() % 101) < hittingChances)
					{
						soldiers[toAttack]->GetDamage(attack);

						cout << "Attack landed with " << attack << " points of damage, " << soldiers[toAttack]->GetName() << " current life is " << soldiers[toAttack]->GetHealth() << endl << endl;
					}
					else
					{
						cout << "Miss shot, sorry boy..." << endl << endl;
					}
				}
			}
			else
			{
				cout << "Miss shot, the target was out of range" << endl << endl;
			}
		}
		else
		{
			if (rand() % 101 < 50)
			{
				soldiers[toAttack]->GetDamage(attack);

				cout << "Attack landed with " << attack << " points of damage, " << soldiers[toAttack]->GetName() << " current life is " << soldiers[toAttack]->GetHealth() << endl << endl;
			}
			else
			{
				cout << "Miss shot, the target was out of range" << endl << endl;
			}
		}
		
	}
}
