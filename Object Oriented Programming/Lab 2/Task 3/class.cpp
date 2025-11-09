#include"Header.h"
#include<iostream>
using namespace std;
class Triangle
{
private:
	double base, hieght;
public:
	void set(double b, double h)
	{
		base = b;
		hieght = h;
	}
	void calculatearea(double b1, double h1, double area)
	{
		area = 1 / 2 * (b1*h1);
	}
	void display(double max)
	{
		cout << "The Largest Area is : " << max << endl;
	}
};
