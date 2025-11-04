/******************************************************************************
GradesResult (5 Courses)
*******************************************************************************/

#include<iostream>
using namespace std;
int main(){
	
	int a,b,c,d,e;
	
	cout << "Enter Marks of Functional English: "; cin >> a;
	cout << "Enter Marks of ITC: "; cin >> b;
	cout << "Enter Marks of ITC LAB: "; cin >> c;
    cout << "Enter Marks of Basic Electronics: ";	cin >> d;
    cout << "Enter Marks of Logical Thinking: "; cin >> e;

	float sum = a + b + c + d + e;
	float percentage = sum / 500 * 100;
	cout << "\n----------\n[ Total Percentage ] = " << percentage << "%" << endl;

	// TypeCast
	int per = static_cast<int>(percentage);

	switch (per / 10)
	{
		case 9:
			cout << "Your grade is: A\n";
			break;

		case 8:
			cout << "Your grade is: B\n";
			break;

		case 7:
			cout << "Your grade is: C\n"; 
			break;

		case 6:
			cout << "Your grade is: D\n"; 
			break;
		case 5:
			cout << "Your grade is: E\n"; 
			break;

		case 4:
			cout << "Your grade is: F\n"; 
			break;

		default:
			cout << "You're Failed!\nYour percentage is below the passing marks." << endl;
	}
	return 0;
}