/*  Right Triangle or Not ?

if (LHS == RHS means RightTriangle 'TRUE')
LHS = hyp^2
RHS = base^2 + perp^2
*/

#include <iostream>  
using namespace std;  
int main()  
{  
	int hyp, base, perp;
	
	cout << "Enter Hypotenuse Of Triangle: ";cin >> hyp;
	cout << "Enter Base Of Triangle: "; cin >> base;
	cout << "Enter Perpendicular Of Triangle: ";	cin >> perp;

	if ( hyp * hyp == (base * base) + (perp * perp) )
		cout << "\nThis is a right angle triangle." << endl;
	else
		cout << "\nThis is not a right angle triangle." << endl;
  return 0;  
}  