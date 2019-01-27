/*  Norman Nguyen
	CSC215

*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
//Using standard library
using namespace std;
//Main Function
int main ()
{
	//Helps pick a random number as without it, it would end up sticking to one number(which is 42 everytime).
	//srand helps to give a new number for the rand() function.
	srand((int)time(0));
	//Highest
	int searchGridHighNumber = 64;
	//lowest
	int searchGridLowNumber = 1;
	//Creates a random pick from 1 to 64.
	int enemyLocation = rand() % 64 + 1;
	//Prediction number
	int targetPredictionPing = 0;
	//Boolean means true or false so having enemyTargeted false which resets
	bool enemyTargeted = false;

	//Introduction to start the program, the program start a 8x8 (64) grid search
	cout << "System Processing 8x8 Grid..." << endl;
	//Printing out the Prediction number
	cout << "System: The enemy is somewhere in #" << targetPredictionPing << endl;
	cout << "Skynet HK-Aerial Initializing Software...." << endl;
	cout << "" << endl;
	//While loop if the number is not found it will go back to proven true.
	//True means to stop the program while false means find the right answer.
	//True = Stop
	//False = Repeat until True
	while (enemyTargeted == false)
	{ 
		//Algorithm code
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		//Adding prediction number of how many tries the program search
		targetPredictionPing++;
		//If the number is on the exact spot, the program will stop to catch the enemy location.
		if (targetLocationPrediction == enemyLocation)
		{
			//Sends out first, second or later ping.
			cout << "Skynet HK-Aerial Radar sending out ping #" << targetPredictionPing << endl;
			//Location number
			cout << "Enemy hiding at location # " << enemyLocation << endl;
			//
			cout << "Enemy spotted at location # " << targetLocationPrediction << endl;
			//Asking that the number of tries were told when searching.
			cout << "Sir, it took us " << targetPredictionPing << " tries to find the enemies in a 8x8 (64) grid." << endl;
			enemyTargeted = true;
			cout << "" << endl;
		}
		//Incase the number is greater than the actual number, it will cross it off from its grid.
		else if (targetLocationPrediction > enemyLocation)
		{
			cout << "Skynet HK-Aerial Radar sending out ping #" << targetPredictionPing << endl;
			//Highest Search Grid = 1 + Target Location Formula + 1
			searchGridHighNumber = targetLocationPrediction - 1;
			cout << "The target location prediction of #" << targetLocationPrediction << endl;
			//Print Enemy Location
			cout << "The number was higher than the actual enemy location of #" << enemyLocation << "." << endl;
			//Print High Grid Number
			cout << "The new searchGridHighNumber = #" << searchGridHighNumber << endl;
			cout << "" << endl;
		}
		//Incase the number is less than the actual number, it will cross it off from its grid.
		else if (targetLocationPrediction < enemyLocation)
		{
			cout << "Skynet HK-Aerial Radar sending out ping #" << targetPredictionPing << endl;
			//Lowest Search Grid = 1 + Target Location Formula + 1
			searchGridLowNumber = targetLocationPrediction + 1;
			//Print Enemy Location
			cout << "The target location prediction of #" << targetLocationPrediction << endl;
			//Print Enemy Location
			cout << "The number was lower than the actual enemy location of #" << enemyLocation << "." << endl;
			//Print Low Grid Number
			cout << "The new searchGridHighNumber = #" << searchGridLowNumber << endl;
			cout << "" << endl;
		}
		else
		{
			//If nothing else happening, this will stop the program from going beyond infinite.
			cout << "Sir, we're having mantience issues of our Skynet Drone!" << endl;
			cout << "We need maintence immediately!" << endl;
			//True to stop the program
			enemyTargeted = true;
		}
	}
	//System Pause so we don't have the program terminated.
	system("Pause");
	return 0;
}