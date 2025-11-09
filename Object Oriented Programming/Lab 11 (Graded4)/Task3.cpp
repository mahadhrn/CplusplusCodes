#include<iostream>
using namespace std;

// Base Class (CARD) No member functions.
class card
{
private:
	int cardnumber;
protected:
	char* ownername;
public:
	char* expdate;
};

// Derived Class (Callingcard)
class callingcard : public card
{
private:
	float amount;
	char* companyname;
	int pin;
public:
	void setAmnt(float a)
	{
		amount = a;
	}
	float getAmnt()
	{
		return amount;
	}

	void setPin(int p)
	{
		pin = p;
	}
	int getPin()
	{
		return pin;
	}

	void setCompnyName(char* c)
	{
		companyname = c;
	}
	char *getCompnyName()
	{

		return companyname;
	}
	callingcard(float a, char* n, int p)
	{
		amount = a;
		companyname = n;
		pin = p;
	}

	
	void display1(){
		cout << "Amount : " << amount << endl;
		cout << "Company Name: " << companyname << endl;
		cout << "PIN: " << pin << endl;
	}
	~callingcard(){}
};

// Derived Class (ID)
class id :protected card
{
private:
	double cnic;
	int age;
public:
	void setage(int a)
	{
		age = a;
	}
	int getage()
	{
		return age;
	}
	void setcnic(double id)
	{
		cnic = id;
	}

	double getcnic()
	{

		return cnic;
	}

	
	id(double c, int a)
	{
		age = a;
		cnic = c;
	}
	void display2(){
		cout << "Person CNIC: " << cnic << endl;
		cout << "Person Age: " << age << endl;
	}
	~id(){}
};

// Derived Class (DrivingLiscence)
class drivinglicense :private card
{
private:
	char* type;
	char* city;
public:
	void settype(char* t)
	{
		type = t;
	}
	char* gettype()
	{
		return type;
	}
	void setcity(char* c)
	{
		city = c;
	}
	char* getcity()
	{
		return city;
	}
	
	drivinglicense(char* t, char* c)
	{
		type = t;
		city = c;
	}
	void display3(){
		cout << "Car Type: " << type << endl;
		cout << "Issued in City: " << city << endl;
	}
	~drivinglicense(){}
};

//Driver Code
int main()
{
	callingcard obj1(50000, "Neptune Technologies", 179);
	obj1.display1();
	id obj2(35202,35);
	obj2.display2();
	drivinglicense obj3("Light", "Lahore");
	obj3.display3();
	
	return 0;
}