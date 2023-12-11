//name: eliska vrzalova
//login ID: c00301768
//date: 09/10/2023
//estimated time taken: 20min
//actual time taken: min
//Program title and description: This program ask for exam grade and outputs whether student failed, passed , had merit or distinction
//any known bugs: no validation on user input

#include <iostream>

int main()
{
	//variables
	int examMark = 0;
	const int FAIL = 40;
	const int PASS = 55;
	const int MERIT = 70;
	const int DISTINCTION = 100;

	//ask user for input
	std::cout << "What is your exam mark" << std::endl;
	std::cin >> examMark;

	//checking the grade
	if (examMark >= 0 and examMark < FAIL) // range 0 - 39
	{
		std::cout << "Student has failed." << std::endl;
	}
	else if (examMark >= FAIL and examMark < PASS) //range 40 -54
	{
		std::cout << "Student has passed." << std::endl;
	}
	else if (examMark >= PASS and examMark < MERIT) //range 55- 69
	{
		std::cout << "Student has a merit." << std::endl;
	}
	else if (examMark >= MERIT and examMark <= DISTINCTION) //range 70 - 100
	{
		std::cout << "Student has distinction.";
	}
	else {
		std::cout << "Error- exam mark has an incorrect value." << std::endl;
	}


	system("Pause");
	return 0;
}

