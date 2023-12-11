//name: eliska vrzalova
//login ID: c00301768
//date: 09/10/2023
//estimated time taken: 20min
//actual time taken: 30min
//Program title and description: Ordering system- this program calculates the cost of the order in Euros and Dollars. It also calculates the cost of ordered material which is not used in dollars.
//any known bugs: no validation on user input

#include <iostream>

int main6()
{
	//variables
	float girders = 0; //user input
	int totalDollars = 0; 
	int totalEuro = 0;
	const float EURO_TO_DOLLARS = 0.9; //euro to dollar conversion
	int notUsed = 0;
	const int GIRDER_PRICE = 6; //price per 1 girder in dollars
	float numberGroup = 0;
	int numberGroupRounded = 0;
	const int GROUP = 10; //there are 10 girders in 1 group
	const int GROUP_PRICE = 60; //price of 1 group in dollars
	int groups = 0;

	//input
	std::cout << "How many girders do you need?";
	std::cin >> girders;
	// calculations
	numberGroup = (girders / GROUP); //number of groups to buy calculation
	numberGroupRounded = floor(girders / GROUP);
	//if statement
	if (numberGroup == numberGroupRounded) {
		totalDollars = GROUP_PRICE * numberGroup; //calculates the cost of the order in dollars
		totalEuro = totalDollars * EURO_TO_DOLLARS; // calculates the cost of the order in Euro
		notUsed = totalDollars - (girders * GIRDER_PRICE); //calculates the cost of ordered but not used girders
	}
	else {
		groups = numberGroup + 1; //calculates the number of groups
		totalEuro = GROUP_PRICE * groups; //calculates the cost of the order in dollars
		totalEuro = totalDollars * EURO_TO_DOLLARS; //calculates the cost of the order in Euro
		notUsed = totalDollars - (girders * GIRDER_PRICE); //calculates the cost of ordered but not used girders
	}
	//answer
std::cout << "Total cost in dollars is:" << totalDollars;
std::cout << "Total cost in Euro is:" << totalEuro;
std::cout << "Total cost in dollars of material ordered but not used is:" << notUsed << std::endl;

	system("Pause");
	return 0;


}