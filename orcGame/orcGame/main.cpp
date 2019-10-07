#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Character {
public:
	void flip() { cout << "I know how to flip and I will flipping do it" << endl; }
	virtual void walk() { cout << "just in case they are too young to walk yet" << endl; }
	virtual void fly() = 0; //pure virtual function
	int dex = 0;
	int str = 0;
	int size = 0;
	int damage = 0;
};

class Orc : public Character {
public:
	void barrelRoll() { cout << "rooooooolllllllllllinggggggg" << endl; }
	void walk() { cout << "Doopers have a really cool walk!" << endl; }
	void fly() { cout << "Dooper is flapping and flying" << endl; }
	
};

class Troll : public Character {
public:
	void fly() { cout << "Average Dooper is flapping and flying" << endl; }
};

int main(void)
{
	srand(static_cast<unsigned>(time(nullptr)));
	Orc orc;
	int characterCreation = 0;


	std::cout << " enter 1 to create your character " << endl;
	std::cin >> characterCreation;

	if (characterCreation == 1)
	{
		orc.dex = rand() % 20;
		orc.str = rand() % 20;
		orc.size = rand() % 10;
		if (orc.size + orc.str <= 5)
		{
			orc.damage = 2;
		}
		else if (orc.size + orc.str <= 10)
		{
			orc.damage = 4;
		}
		else if (orc.size + orc.str <= 15)
		{
			orc.damage = 6;
		}
		else if (orc.size + orc.str <= 20)
		{
			orc.damage = 8;
		}
		else if (orc.size + orc.str <= 25)
		{
			orc.damage = 10;
		}
		else if (orc.size + orc.str <= 30)
		{
			orc.damage = 12;
		}
	}



	//Character character;
	//character.flip();
	//character.walk();




	
	
}

void enemyTroll()
{

}