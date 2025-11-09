#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	Triangle obj1;
	Triangle obj2;
	Triangle obj3;
	Triangle obj4;
	Triangle obj5;
	double base[5], hieght[5], area[5], max;
	cout << "Enter Details of Triangle \n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Details of Triangle no " << i + 1 << endl;
		cout << "Enter Base : ";
		cin >> base[i];
		cout << "Enter Hieght : ";
		cin >> hieght[i];
		cout << endl;
	}
	obj1.set(base[0], hieght[0]);
	obj1.calculatearea(base[0], hieght[0],area[0]);
	obj2.set(base[1], hieght[1]);
	obj2.calculatearea(base[1], hieght[1],area[1]);
	obj3.set(base[2], hieght[2]);
	obj3.calculatearea(base[2], hieght[2],area[2]);
	obj4.set(base[3], hieght[3]);
	obj4.calculatearea(base[3], hieght[3],area[3]);
	obj5.set(base[4], hieght[4]);
	obj5.calculatearea(base[4], hieght[4],area[4]);
	max = area[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < area[i])
		{
			max = area[i];
		}
	}
	cout << "The Largest Area is : " << max << endl;
	system("pause");
	return 0;
}