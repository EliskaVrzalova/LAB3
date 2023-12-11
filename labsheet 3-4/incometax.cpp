//name: eliska vrzalova
//login ID: c00301768
//date: 09/10/2023
//estimated time taken: 15min
//actual time taken: 10min
//Program title and description: Income tax- this program calculates neat pay and tax due after gross income is given
//any known bugs: no validation on user input


#include <iostream>

int main4()
{
	//variables
	float grossIncome = 0;
	float netPay = 0;
	float taxDue = 0;
	const int TAX_BAND = 22;
	const int TAX_FREE_ALLOWANCE = 12000;
	//input
	std::cout << "What is the gross income?"; 
	std::cin >> grossIncome;
	//calculations
	if (grossIncome > TAX_FREE_ALLOWANCE) 
	{
		taxDue = ((grossIncome - TAX_FREE_ALLOWANCE) * TAX_BAND) / 100; //calculates the tax which is due using tax band 22%
		netPay = grossIncome - taxDue; //calculates the net pay
		
	}
	else // no tax
	{
		netPay = grossIncome;
		taxDue = 0;
	}
	//answer
	std::cout << "The net pay is" << netPay << " and the tax which is due is " << taxDue << std::endl;

	
	system("Pause");
	return 0;
}