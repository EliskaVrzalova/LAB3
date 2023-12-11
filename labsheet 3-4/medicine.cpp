//eliska vrzalova
// login: c00301768
// date: 29/09/2023
// est time taken: 15 mins (start 15:32)
// actual time taken: 15 mins (15:47)
// medicine dispensing problem
// any known bugs: no validation on users input

#include <iostream>

int main1()
{
	//variables
	float numberL = 0; // user will input how many liters are in the bottle
	int numberMl = 0; // user will input how many mililiters is 1 injection
	int injections = 0; // how many injections are in the bottle
	int leftoverMl = 0; // how many ml are left

	// ask user for input
	std::cout << "How many litters are in a bottle of medicine?";
	std::cin >> numberL;
	std::cout << "How many mililiters are in 1 injection?";
	std::cin >> numberMl;

	//calculations
	numberL = numberL * 1000;
	injections = numberL / numberMl; // calculates the number of injections in the bottle
	leftoverMl = numberL - (injections * numberMl); // calculates the mililiters left

	//display answer
	std::cout << "The number of injections in this bottle is " << injections << std::endl;
	std::cout << "There is " << leftoverMl << " mililitres left over after all injections have been taken." << std::endl;
	system("Pause");
	return 0;

}