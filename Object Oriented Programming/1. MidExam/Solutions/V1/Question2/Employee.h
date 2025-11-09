#include <iostream>
using namespace std;

class Employee
{
	int age;
	double salary;
	char *name;
public:
	void setAge(int a);
	void setName(char* n);

	void display() const;
	char* getName() const;
	void increaseSalaryBy(double val);

	Employee (const Employee& rhs);
	Employee& operator = (const Employee& rhs);
	Employee();
	Employee(char* n, int a, double s);
	~Employee();
};