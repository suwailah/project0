//Nasser Suwwailah
//Project0

#include <iostream>
#include <string>

using namespace std;


class Trainer
{
public:

	Trainer(string z)
	{
		setName(z);
	}
	Trainer(int x)
	{
		setMaxNumFightingPets(x);
	}
	Trainer(int i)
	{
		getLevel;
	}
	Trainer(int t)
	{
		getExpPoints;
	}
	void setName(string x)
	{
		name = x;
	}
	string getName()
	{
		return name;
	}
	void setMaxNumFightingPets(int x)
	{
		maxNumFightingPets = x;
	}
	int getMaxNumFightingPets()
	{
		return maxNumFightingPets;
	}
	int getLevel(int x)
	{
		return level;
	}
	int getExpPoints(int i)
	{
		return expPoints;
	}


private:

	string name;
	int maxNumFightingPets;
	int expPoints;
	int level;
	//int array[];


};
class FightingPet
{
public:
	void setName(string x)
	{
		name = x;
	}
	string getName()
	{
		return name;
	}
	void setPetNum(int i)
	{
		petNum = i;
	}
	int getPetNum()
	{
		return petNum;
	}
	void setCombatPower(int x)
	{
		combatPower = x;
	}
	int getCombatPower()
	{
		return combatPower;
	}
private:
	string name;
	int petNum;
	int combatPower;


};

int main()
{
	//Trainer trainer;
	Trainer trainer("Nas\n");
	cout << trainer.getName();
	Trainer::setMaxNumFightingPets;
	cout << trainer.getMaxNumFightingPets();
		//cout << "Max number of fighting pets:";
			//trainer.setMaxNumFightingPets(3);
			//cout << trainer.getMaxNumFightingPets();
			/*trainer.expPoints();
			trainer.level();
			trainer.maxNumFightingPets();*/
	Trainer trainer;
	if (int x < Trainer::int level * 1000)
	{
		Trainer trainer("your level is:");
		cout << trainer.getLevel();
	}
	else
	{
		Trainer::getExpPoints;
	}



		return 0;
}
