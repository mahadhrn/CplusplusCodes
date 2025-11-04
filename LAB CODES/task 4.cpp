/******************************************************************************
Arithmetic Operations
*******************************************************************************/
#include <iostream>
using namespace std;
int main(){

	int a;
	cout << "-------------------------------" << endl;
	cout << "Enter your 1st number = ";
	cin >> a;

	int b;
	cout << "Enter your 2nd number = ";
	cin >> b;
	cout << "-------------------------------" << endl;

	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int reminder = a % b;

	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Reminder = " << reminder << endl;
	cout << "-------------------------------" << endl;
	cout << "\n";

	return 0;
}