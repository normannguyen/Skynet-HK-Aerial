
#include <iostream>
#include <String>
#include <>

using namespace std;

int main ()
{
	int searchGridHighNumber = 64;
	int searchGridLowNumber = 1;
	int enemyLocation = rand() % 64 + 1;
	while (true)
	{ 
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		if (targetLocationPrediction == enemyLocation)
		{

		}
		else if (targetLocationPrediction == enemyLocation)
		{

		}
		else if (targetLocationPrediction == enemyLocation)
		{

		}
		else
		cout << "Sir, we've a problem with the drones!" << endl;
		cout << "We call for maintence!" << endl;
		system("pause");
	}
}