#include "GameLoop.h"

GameLoop::GameLoop()
{
	srand(time(NULL));

	soldiersQnty = 10;

	for (int i = 0; i < soldiersQnty; i++)
	{
		switch (rand() % 4)
		{
			case 0:
			{
				soldiers[i] = new Swordsman(35.0f, 2);
				break;
			}
			case 1:
			{
				soldiers[i] = new Lancer(25.0f, 3);
				break;
			}
			case 2:
			{
				soldiers[i] = new Crossbowman(20.0f, 3, 6);
				break;
			}
			case 3:
			{
				soldiers[i] = new Archer(25.0f, 3, 7);
				break;
			}
		}

		cin.get();

		soldiers[i]->SetPosition(i);
	}
}

GameLoop::~GameLoop()
{
	system("cls");

	for (int i = 0; i < 2; i++)
	{
		if (soldiers[i] != nullptr)
		{
			cout << soldiers[i]->GetName() << " won the war..." << endl;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (soldiers[i] != nullptr)
		{
			delete soldiers[i];
		}
	}

	cout << "Game finished..." << endl;
}

void GameLoop::Play()
{
	while (soldiersQnty > 1)
	{
		system("cls");

		cout << "Active soldiers: " << soldiersQnty << endl << endl;

		for (int i = 0; i < soldiersQnty; i++)
		{
			int actualPos = i;

			if (soldiersQnty > 1)
			{
				soldiers[i]->Attack(soldiers, soldiersQnty);
			}

			for (int j = 0; j < actualPos; j++)
			{
				if (!soldiers[j]->IsAlive())
				{
					i--;
				}
			}
			ReorderSoldiers();

			cin.get();
		}
	}
}

void GameLoop::ReorderSoldiers()
{
	Soldier* copy[10];

	int copyQnty = 0;

	for (int i = 0; i < soldiersQnty; i++)
	{
		if (soldiers[i]->IsAlive())
		{
			copy[copyQnty] = soldiers[i];
			copyQnty++;
			soldiers[i] = nullptr;
		}
		else
		{
			delete soldiers[i];
			soldiers[i] = nullptr;
		}
	}

	soldiersQnty = copyQnty;

	for (int i = 0; i < soldiersQnty; i++)
	{
		soldiers[i] = copy[i];
		soldiers[i]->SetPosition(i);
	}
}
