#include "Swordsman.h"


Swordsman::Swordsman(float attack, int attackRatio) : Melee(attack, attackRatio)
{
	name = "Arthur the swordsman";
	cout << "I'm king Arthur, the man of the sword!" << endl;
}

Swordsman::~Swordsman()
{
	cout << "The sword became dull" << endl;
}

void Swordsman::Attack(Soldier* soldiers[], int soldiersQnty)
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

		cout <<  name << " attacks " << soldiers[toAttack]->GetName() << endl;

		if (abs(position - toAttack) <= attackRatio)
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
