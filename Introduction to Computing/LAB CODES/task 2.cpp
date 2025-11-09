/******************************************************************************
Find Perimeter & Area of a rectangle.
Get Length / Width (150m/100m)

Formula (Rectangle): 
Perimeter = 2 * (length + width) 
Area = length * width

2.	Take the radius from the user and calculate the area of the circle
Area = πr^2

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
	// Area & Perimeter of Rectangle
	cout << "[Calculate Area & Perimeter of Rectangle by Given Length and Width] \n" << endl;
	int Length;
	int Width;
	cout << "Enter Length= ", cin >> Length;
	cout << "Enter Width = ", cin >> Width;
	
	cout << "-> Area of Rectangle = " << Length * Width << " meter square" << endl;
	cout << "-> Perimeter of Rectangle = " << 2 * (Length + Width) << "m\n\n" << endl;
	cout << "____________________________\n\n" << endl;

	// Area of Circle by given Radius
	cout << "[Calculate Area of Circle by User Radius]\n" << endl;
	int Radius;
	cout << "Enter Radius = ", cin >> Radius;
	cout << "-> Area of Circle = " << 3.142*Radius*Radius << endl;
	return 0;
}