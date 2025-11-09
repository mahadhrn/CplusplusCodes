#include<iostream>
//#include"Header.h"
using namespace std;
class dayType
{
    char day[10];
    
public:
	dayType(char d[10])
	{
		day[10] = d[10];
	}
//
	void get()
	{
		cout << "Enter Day : "; cin.getline(day,10);
	}
	
//	
	void printday()
	{
		cout << "Current Day is : " << day << endl;
	}
//	
	void nextday()
	{
		if (day == "Monday")
		cout<<"Next day is : Tuesday"<<endl;
		else if (day == "Tuesday")
		cout<<"Next day is : Wednesday"<<endl;
		else if (day == "Wednesday")
		cout<<"Next day is : Thursday"<<endl;
		else if (day == "Thursday")
		cout<<"Next day is : Friday"<<endl;
		else if (day == "Friday")
		cout<<"Next day is : Saturday"<<endl;
		else if (day == "Saturday")
		cout<<"Next day is : Sunday"<<endl;
		else if (day == "Sunday")
		cout<<"Next day is : Monday"<<endl;
	}

};

int main()
{
	char day[10];
	dayType obj(day);
	obj.get();
	obj.printday();
	obj.nextday();

	return 0;
}