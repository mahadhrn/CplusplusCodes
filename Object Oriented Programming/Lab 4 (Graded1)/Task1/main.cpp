#include<iostream>
//#include"Header.h"
using namespace std;
class swimmingPool
{
private:
	double length, width, depth,volume,time;
	double fillingrate, drainingrate;
public:
	swimmingPool(double l, double w, double d,double v,double t,double fg, double dg)
	{
		length = l;
		width = w;
		depth = d;
		volume = v;
		time = t;
		fillingrate = fg;
		drainingrate = dg;

	}
	void get()
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
	void volumeofpool()
	{
		volume = length*width*depth;
		cout << "\nVolume of Swimming Pool is : " << volume << endl;
	}
	void amountwater()
	{
		cout << "Amount of water needed (to fill the swimming pool) : " << volume*7.5 <<" Gallons"<< endl;
	}
	void timetofill()
	{
		time = volume*7.5 /fillingrate;
		cout << "\nTime needed to 'Fill' the pool with water is : " << time << " minutes" << endl;
	}
	void timetodrain()
	{
		cout << "Time needed to 'Drain' the water from the pool : " << volume*7.5 / time << " minutes" << endl;
	}
};

int main()
{
	double length, width, depth, volume, time;
	double fillingrate, drainingrate;
	swimmingPool obj1(length, width, depth, volume, time, fillingrate, drainingrate);
	obj1.get();
	obj1.volumeofpool();
	obj1.amountwater();
	obj1.timetofill();
	obj1.timetodrain();

	return 0;
}