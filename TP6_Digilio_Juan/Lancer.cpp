#include "Lancer.h"

Lancer::Lancer(float attack, int attackRatio) : Melee(attack, attackRatio)
{
	name = "Leonidas the lancer";
	cout << "I'm a Leonidas the Spartan, get ready to feel the power of my lance!" << endl;
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

		cout << name << " attacks " << soldiers[toAttack]->GetName() << endl;

		if (abs(position - toAttack) <= attackRatio)
		{
			int totalSoldiersToAttack = abs(position - toAttack);

			if (toAttack < position)
			{
				for (int i = position - 1; i > toAttack - 1; i--)
				{
					float actualDamage = attack / totalSoldiersToAttack;
					soldiers[i]->GetDamage(actualDamage);
					totalSoldiersToAttack--;

					cout << "Attack landed with " << actualDamage << " points of damage, " << soldiers[i]->GetName() << " current life is " << soldiers[i]->GetHealth() << endl << endl;
				}
			}
			else
			{
				for (int i = position + 1; i < toAttack + 1; i++)
				{
					float actualDamage = attack / totalSoldiersToAttack;
					soldiers[i]->GetDamage(actualDamage);
					totalSoldiersToAttack--;

					cout << "Attack landed with " << actualDamage << " points of damage, " << soldiers[i]->GetName() << " current life is " << soldiers[i]->GetHealth() << endl << endl;
				}
			}
		}
		else
		{
			cout << "Miss shot, the target was out of range" << endl << endl;
		}
	}

}
