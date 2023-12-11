//name: eliska vrzalova
//login ID: c00301768
//date: 09/10/2023
//estimated time taken: 15min
//actual time taken: 10min
//Program title and description: Ant-sugar problem- calculates the shortest rounte the ant can take to the diagonally opposite bowl of sugar
//any known bugs: no validation on user input

#include <iostream>

int main5()
{
	//variables
	float width = 0; //room measurements
	float height = 0; //room measurements
	float lenght = 0; //room measurements
	float diagonal = 0; //part of the ants route
	float route = 0;
	//input
	std::cout << "What is the width of the room in meters?";
	std::cin >> width;
	std::cout << "What is the lenght of the room in meters?";
	std::cin >> lenght;
	std::cout << "What is the height of the room in meters?";
	std::cin >> height;
	//calculations
	diagonal = sqrt(width * width + lenght * lenght); //calculates the diagonal part of the ants route
	route = height + diagonal; //calculates the shortest route the ant can crawl
	//answer
	std::cout << "The shortest route the ant can crawl is " << route << "meters." << std::endl;
	system("Pause");
	return 0;

}
