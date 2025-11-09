#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	int employeecode[5], ageatjoining[5], currentage[5];
	Employee obj1;
	Employee obj2;
	Employee obj3;
	Employee obj4;
	Employee obj5;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Details of Employee No " << i+1 << endl;
		cout << "Enter Employee Code : ";
		cin >> employeecode[i];
		cout << "Enter Employee Age at joining : ";
		cin >> ageatjoining[i];
		cout << "Enter Employee Current Age : ";
		cin >> currentage[i];
		cout << endl;
	}
	cout << "Details of employees whose tenure is 2 or more then 2 years!\n";
	obj1.set( employeecode[0], ageatjoining[0], currentage[0]);
	obj1.calculateTenure(employeecode[0], ageatjoining[0], currentage[0]);
	obj2.set(employeecode[1], ageatjoining[1], currentage[1]);
	obj2.calculateTenure(employeecode[1], ageatjoining[1], currentage[1]);
	obj3.set(employeecode[2], ageatjoining[2], currentage[2]);
	obj3.calculateTenure(employeecode[2], ageatjoining[2], currentage[2]);
	obj4.set(employeecode[3], ageatjoining[3], currentage[3]);
	obj4.calculateTenure(employeecode[3], ageatjoining[3], currentage[3]);
	obj5.set(employeecode[4], ageatjoining[4], currentage[4]);
	obj5.calculateTenure(employeecode[5], ageatjoining[5], currentage[5]);
	system("pause");
	return 0;
}