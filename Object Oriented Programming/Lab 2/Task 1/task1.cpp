#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	int day1, day2;
	int month1, year1;
	int month2,year2;
	sDate obj1;
	sDate obj2;
	int a = 0;
	while (a == 0)
	{
		cout << "Enter your Date of Birth (day/month/year): ";
		cin >> day1;
		if (day1 < 0)
		{
			cout << "Enter Again\n ";
			continue;
		}
		else if (day1>0)
		{
			break;
			a = 1;
		}
	}
	cin >> month1;
	cin >> year1;

	obj1.set(day1, month1, year1);
	obj1.get1();
	cout << "Enter current date (day/month/year): ";
	cin >> day2;
	cin >> month2;
	cin >> year2;
	obj2.set(day2, month2, year2);
	obj2.get2();
	obj2.age(day1, month1, year1, day2, month2, year2);
	system("pause");
	return 0;
}