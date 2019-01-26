
#include <iostream>
#include <String>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	int searchGridHighNumber = 64;
	int searchGridLowNumber = 1;
	int enemyLocation = rand() % 64 + 1;
	int targetPredictionPing = 0;
	bool enemyTargeted = false;
	cout << "System Processing 8x8 Grid..." << endl;
	cout << "System: The enemy is somewhere in #" << targetPredictionPing << endl;
	cout << "Skynet HK-Aerial Initializing Software...." << endl;
	while (false)
	{ 
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		targetPredictionPing++;
		if (targetLocationPrediction == enemyLocation)
		{
			cout << "Skynet HK-Aerial Radar sending out ping #" << targetPredictionPing << endl;
			cout << "Sir, we've a problem with the drones!" << endl;
			cout << "We call for maintence!" << endl;
			enemyTargeted = true;
		}
		else if (targetLocationPrediction > enemyLocation)
		{
			cout << "Skynet HK-Aerial Radar sending out ping #" << targetPredictionPing << endl;
			searchGridHighNumber = targetLocationPrediction - 1;
			cout << "The new searchGridHighNumber = " << searchGridHighNumber << endl;
			cout << "" << endl;
		}
		else if (targetLocationPrediction < enemyLocation)
		{
			searchGridLowNumber = targetLocationPrediction + 1;
			cout << "Sir, we've a problem with the drones!" << endl;
			cout << "We call for maintence!" << endl;
			cout << "The new searchGridHighNumber = " << searchGridLowNumber << endl;
		}
		else
		{
			cout << "Sir, we've a problem with the drones!" << endl;
			cout << "We call for maintence!" << endl;
			enemyTargeted = true;
		}
	}
	system("Pause");
	return 0;
}