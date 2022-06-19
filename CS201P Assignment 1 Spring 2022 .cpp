#include <iostream>
using namespace std;

void calculateEquationResult(float a, float b, float c, float d, float x);
void maxResult(float i1, float i2, float i3);

main()
{
	char msr;
	calculateEquationResult(2, 3, 4, 5, 10);

	do
	{
		cout << "\nDo you wants to perform another calculation (Y/N): ";
		cin >> msr;
		if (msr == 'y' || msr == 'Y')
		
			calculateEquationResult(6, 7, 8, 9, 11);
			else 
			break;
		

	} while (msr == 'y' || msr == 'Y');
}

void calculateEquationResult(float a, float b, float c, float d, float x)
{
	float eq1, eq2, eq3;
	eq1 = x + b / (3 * a);
	eq2 = (3 * a * c - (b * b)) / (3 * (a * a));
	eq3 = (2 * (b * b * b) - 9 * (a + b + c) + 27 * (a * a) * d) / (27 + (a * a * a));
	cout << "Equation 1: " << eq1 << endl ;
	cout << "Equation 2: " << eq2 << endl ;
	cout << "Equation 3: " << eq3 << endl ;
	maxResult(eq1, eq2, eq3);
}

void maxResult(float eq1, float eq2, float eq3)
{
	if (eq1 > eq2 && eq1 > eq3)
		cout << "\nEquation 1 result is Maximum";
	else if (eq2 > eq1 && eq2 > eq3)
		cout << "\nEquation 2 result is Maximum";
	else
		cout << "\nEquation 3 result is Maximum";
}

