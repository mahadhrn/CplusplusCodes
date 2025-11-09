#include <iostream>
using namespace std;

class Triangle
{
	float height;
	float base;
public:
	void display() const;
	float area() const;
	Triangle();
	Triangle(float, float);
};