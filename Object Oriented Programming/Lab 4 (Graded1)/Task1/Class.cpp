#include<iostream>
#include"Header.h"
using namespace std;

    swimmingPool::swimmingPool(double l, double w, double d,double v,double t,double fg, double dg)
	{
		length = l;
		width = w;
		depth = d;
		volume = v;
		time = t;
		fillingrate = fg;
		drainingrate = dg;

	}

    void swimmingPool::get()
	{
		cout << "\t\t------------------ SWIMMING POOL ------------------ \n\n";
		cout << "Enter Length(in feet)  : ";
		cin >> length;
		cout << "Enter Width(in feet)  : ";
		cin >> width;
		cout << "Enter Depth(in feet)  : ";
		cin >> depth;
		cout << "\nEnter Filling Rate of water in pool : ";
		cin >> fillingrate;
		cout << "Enter Draining Rate of water from pool : ";
		cin >> drainingrate;
	}

    void swimmingPool::volumeofpool()
    {
       	volume = length*width*depth;
		cout << "\nVolume of Swimming Pool is : " << volume << endl; 
    }

    void swimmingPool::amountwater()
	{
		cout << "Amount of water needed (to fill the swimming pool) : " << volume*7.5 <<" Gallons"<< endl;
	}
	
	void swimmingPool::timetofill()
	{
		time = volume*7.5 /fillingrate;
		cout << "\nTime needed to 'Fill' the pool with water is : " << time << " minutes" << endl;
	}
	void swimmingPool::timetodrain()
	{
		cout << "Time needed to 'Drain' the water from the pool : " << volume*7.5 / time << " minutes" << endl;
	}

