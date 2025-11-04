/******************************************************************************
Middle Number (3 integers Input)
*******************************************************************************/

#include <iostream>
using namespace std;
int main(){

	int num1;
	cout << "Enter 1st Number: ";
	cin >> num1;

	int num2;
	cout << "Enter 2nd Number: ";
	cin >> num2;

	int num3;
	cout << "Enter 3rd Number: ";
	cin >> num3;
	cout << endl;


	if (num1 >= num2 && num1 <= num3 || num1 <= num2 && num1 >= num3){
		cout << "Middle Number is: " << num1 << endl;
	}
	if (num2 >= num1 && num2 <= num3 || num2 <= num1 && num2 >= num3){
		cout << "Middle Number is: " << num2 << endl;
	}
	if (num3 >= num1 && num3 <= num2 || num3 <= num1 && num3 >= num2){
		cout << "Middle Number is: " << num3 << endl;
	}

	system("pause");
	return 0;
}