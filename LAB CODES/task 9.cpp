// Sum of Digits (using Sentinel-Controlled :While loop).

#include <iostream>
using namespace std;
int main() {

	int num, digit;
	int sum = 0;
	
	cout << "Enter a 5 Digit Number: " << endl; cin >> num;
	cout << endl;

	if (num < 100000 && num > 9999)
	{
		cout << "Sum of: ";

		while (num > 0){
			digit = num % 10;
			sum = sum + digit;
			num = num / 10;

			cout << digit << "+";
		}
		cout << "= " << sum << endl;
	}
	else
		cout << "\nInvalid Input. Enter 5 Digit Number!\n" << endl;

	system("pause");
	return 0;
}
