#include "Triangle.h"

Triangle::Triangle()
{
	height = 0;
	base = 0;
}

Triangle::Triangle(float b, float h)
{
	base = b;
	height = h;
}

void Triangle::display() const
{
	cout << "Base = " << base << " Height = " << height << endl;
}

float Triangle::area() const
{
	return 0.5*base*height;
}


