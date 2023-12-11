//name: eliska vrzalova
//login ID: c00301768
//date: 09/10/2023
//estimated time taken: 15min
//actual time taken: 10min
//Program title and description: The leg counting problem, this program calculates number of sheep and chicken based on given number of legs
//any known bugs: no validation on user input

#include <iostream>

int main3()
{
	//variables
	int animals = 0;
	int legs = 0;
	int sheep = 0;
	int chickens = 0;

	//input
	std::cout << "What is the total amount of animals?";
	std::cin >> animals;
	std::cout << "What is the total number of legs?";
	std::cin >> legs;
	//calculations
	sheep = (legs - 2 * animals) / 2; //calculates the amount of sheep
	chickens = animals - sheep; //calculates the amount of chickens
	//answer
	std::cout << "There are" << sheep << "sheep and" << chickens << " chicken(s) on the farm" << std::endl;
	system("Pause");
	return 0;
		
}