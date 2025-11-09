#include<iostream>
#include<string>
using namespace std;

//  Person class
class Person {
private:
	string personName;
	int age;
public:
	//	Parametrized construtor
	Person(string pn = "NULL", int a = 0)
	{
		setName(pn);
		setAge(a);
	}
	//	Setter and getter
	void setName(string pn) {
		personName = pn;
	}
	void setAge(int a) {
		age = a;
	}
	string getName() {
		return personName;
	}
	int getAge() {
		return age;
	}
	// Input Info:
	void inputPersonInfo()
	{
		cout << "Enter Person name: "; cin>>personName;
		cout << "Enter Age: "; cin >> age;
	}
	// Output Info:
	void getPersonInfo()
	{
		cout << endl << "The Name of Person is: " << getName();
		cout << endl << "The Age of Person is: " << getAge();
	}
	~Person(){}
};


//  Employee class
class Employee {
private:
	string employeeName;
	double wage;
public:

	//	Setter and Getter
	void setEmployeeName(string en) {
		employeeName = en;
	}
	void setWage(double w) {
		wage = w;
	}
	string getEmployeeName() {
		return employeeName;
	}
	double getWage() {
		return wage;
	}
	// Input Employee info:
	void inputEmployeeInfo()
	{
		cout << "\nEnter Employee's name: "; cin>>employeeName;
		cout << "Enter Wage: "; cin >> wage;
	}
	
	// Output Employee info:
	void getEmployeeInfo()
	{
		cout << "\nThe Name of Employee is: " << getEmployeeName() << endl;
		cout << "The Employee's Wage is: " << getWage() << endl;
	}
	~Employee(){}
};


//  Teacher Class having:: Multiple Inheritance
class Teacher : public Person, public Employee {
private:
	Person person;
	Employee employee;
	int payScale;
public:

	//	Set/Get PayScale
	void setPayScale(int ps) {
		payScale = ps;
	}
	int getPayScale() {
		return payScale;
	}

	// Inherit methods and Input Payscale:
	void setInfo() {
		person.inputPersonInfo();
		employee.inputEmployeeInfo();
		cout << "Enter the pay scale: ";
		cin >> payScale;
	}
	// Output Info of Person,Emp and Payscale.
	void displayInfo()
	{
	    cout <<"______________________________\n";
		person.getPersonInfo();
		employee.getEmployeeInfo();
		cout << "Pay Scale is: " << getPayScale() << endl;
	}
	~Teacher(){}
};


// Driver Code
int main()
{
    
	Teacher teacher;
	teacher.setInfo();
	teacher.displayInfo();

	return 0;
}