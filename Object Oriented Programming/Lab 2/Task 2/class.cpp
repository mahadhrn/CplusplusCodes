#include<iostream>
#include"Header.h"
using namespace std;
class Employee
{
private:
	int employeecode;
	int ageatjoining;
	int currentage;
public:
	void set(int ec, int age, int cage)
	{
		employeecode = ec;
		ageatjoining = age;
		currentage = cage;
	}
	void calculateTenure(int ecode, int aj, int ca)
	{
		int tenure;
		tenure = ca - aj;
		if (tenure >= 2)
		{
			cout << "Employee Code is : " << ecode << endl;
			cout << "Employee Age is  : " << ca << endl;
		}
		cout << endl;
	}
};