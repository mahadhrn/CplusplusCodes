/******************************************************************************
Nested IF-Switch (Selection)
*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	cout << "Enter 1 for calculator \n Enter 2 to check positive/negative or zero \t:";
	int selection;
	cin >> selection;
	
	if (selection == 2)
	{
		int input;
		cout<< "Enter a number to check for +ve, -ve or zero: ";
		cin >> input;
		if (input == 0) { cout << "You entered 0 \n"; }
		if (input < 0) { cout << "You entered negative \n"; }
		if (input > 0) { cout << "You entered positive \n"; }
	}
	else
	if (selection == 1)
	{
		float a, b;
		cout << "Enter first number : ";
		cin >> a;
		cout << "Enter second number : ";
		cin >> b;
		cout << "Enter +,-,*,/ or % : ";
		int x = static_cast<int> (a);
		int y = static_cast<int> (b);
		char symbol;
		cin >> symbol;
		switch (symbol)
		{
		case '+':
			cout << a << " + " << b << " = " << a + b << endl;
			break;
		case '-':
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case '*':
			cout << a << " * " << b << " = " << a * b << endl;
			break;
		case '/':
			if (b != 0)
			{
				cout << a << " / " << b << " = " << a / b << endl;
				break;
			}
			else
			{		cout << "The second number entered is 0. \n";
			}
			case '%':
				cout << a << " % " << b << " = " << x % y << endl;
				break;
			default:
				cout << "You didnot enter desired operation. \n";
			}
	
	
	}
	system("pause");
	return 1;
}
