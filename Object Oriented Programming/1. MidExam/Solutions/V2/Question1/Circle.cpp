#include "Circle.h"

Circle::Circle()
{
	radius = 0;
	pi = 22.0/7;
}

Circle::Circle(float r)
{
	radius = r;
	pi = 22.0/7;
}

void Circle::display() const
{
	cout << "Radius = " << radius << " Pi = " << pi << endl;
}

float Circle::area() const
{
	return pi*radius*radius;
}


