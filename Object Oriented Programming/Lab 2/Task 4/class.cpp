#include<iostream>
#include"Header.h"
using namespace std;
class ComplexNumber
{
private:
	double realPart;
	double imaginaryPart;
public:
	void set(double rp, double ip)
	{
		realPart = rp;
		imaginaryPart = ip;
	}
	void display()
	{
		cout << endl;
		if (imaginaryPart > -1)
		{
			cout << "Complex Number is: " << realPart << "+" << imaginaryPart << "i" << endl;
		}
		else
		{
			cout << "Complex Number is: " << realPart << "" << imaginaryPart << "i" << endl;
		}
	}
};