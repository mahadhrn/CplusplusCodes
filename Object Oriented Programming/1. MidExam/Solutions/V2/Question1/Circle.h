#include <iostream>
using namespace std;

class Circle
{
	float radius;
	float pi; 	//can also be const float pi
				//further, a student may provide solution without using pi as an attribute
				//depends on how a student does it
public:
	void display() const;
	float area() const;
	Circle();
	Circle(float);
};