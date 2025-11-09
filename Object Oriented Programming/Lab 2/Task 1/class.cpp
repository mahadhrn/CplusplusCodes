#include"Header.h"
#include<iostream>
using namespace std;

class sDate
{
private:
	int day;
	int month;
	int year;
public:
	void set(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void age(int day1, int month1, int year1, int day2, int month2, int year2)
	{
		int dob_date;
		int dob_month;
		int dob_year;
		dob_date = day2 - day1;
		dob_month = month2 - month1;
		dob_year = year2 - year1;
		cout << "Your Age is: " << dob_year << endl;
		cout << "Months are: " << dob_year * 12 << endl;
		cout << "Days are " << dob_year * 12 * 30 << endl;
	}
	void get1()
	{
		cout << "Your Date of Birth is: ";
		cout << day << "/" << month << "/" << year << endl;
	}
	void get2()
	{
		cout << "The Current date is: ";
		cout << day << "/" << month << "/" << year << endl;
	}
};