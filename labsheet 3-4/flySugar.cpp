//name: eliska vrzalova
//login ID: c00301768
//date: 09/10/2023
//estimated time taken: 15min
//actual time taken: 20min
//Program title and description: The Fly-Sugar problem, this program calculates the shortest route for fly to fly from one corneto second corner which is diagonaly opposite
//any known bugs: no validation on user input

#include <iostream>

int main2()
{
	//variables
	float width = 0; //room measurements
	float lenght = 0; //room measurements
	float height = 0; //room measurements
	float heightForFly = 0; //height needed to calculate fly's route
	float route = 0; //the distance fly will fly

	//input
	std::cout << "The width of the room in meters is:";
	std::cin >> width;
	std::cout << "The lenght of the room in meters is:";
	std::cin >> lenght;
	std::cout << "The height of the room in meters is:";
std::cin >> height;

//calculations
heightForFly = sqrt(height * height + width * width); //calculates the height needed for fly's route calculation
route = sqrt(lenght * lenght + heightForFly * heightForFly); //calculates the fly's route

//answer
std::cout << "The shortest route for the fly to fly is" << route << "meters." << std::endl;
system("Pause");
return 0;
}