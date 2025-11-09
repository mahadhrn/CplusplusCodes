#include "Employee.h"

void Employee::setAge(int a)
{
	age = a;
}

void Employee::setName(char* n)
{
	if (name!=nullptr)
	{	
		delete[] name;
		name = nullptr;
	}

	int length = 0;

	while (1)
	{
		if (n[length] == '\0')
			break;

		else
			length++;
	}

	name = new char[length+1];

	for (int i = 0; i < length; i++)
	{
		name[i] =  n[i];
	}

	name[length] = '\0';

}

void Employee::display() const
{
	if (name == nullptr)
		cout << "Name = nullptr" << endl;
	else
		cout << "Name = " << name << endl;

	cout << "Age = " << age << endl;
	cout << "salary = " << salary << endl;
}

char* Employee::getName() const
{
	//return name;	--> this is wrong.
	if (name == nullptr)
	{
		cout << "Name = nullptr, returning null character" << endl;
		char * temp = new char;
		temp = '\0';
		return temp;
	}

	//we need to return temp pointer, not actual pointer
	char*temp;

	int length = 0;

	while (1)
	{
		if (name[length] == '\0')
			break;

		else
			length++;
	}

	temp = new char[length+1];

	for (int i = 0; i < length; i++)
	{
		temp[i] =  name[i];
	}

	temp[length] = '\0';

	return temp;
}

void Employee::increaseSalaryBy(double val)
{
	salary = salary + val;
}

Employee::Employee (const Employee& rhs)
{
	age = rhs.age;
	salary = rhs.salary;

	int length = 0;

	if (rhs.name!=nullptr)
	{
		while (1)
		{
			if (rhs.name[length] == '\0')
				break;

			else
				length++;
		}

		name = new char[length+1];

		for (int i = 0; i < length; i++)
		{
			name[i] =  rhs.name[i];
		}

		name[length] = '\0';
	}

	else
		name = nullptr;
	
}

Employee& Employee::operator = (const Employee& rhs)
{
	//same as copy constructor, this, however returns *this;
	age = rhs.age;
	salary = rhs.salary;

	int length = 0;

	if (rhs.name!=nullptr)
	{
		while (1)
		{
			if (rhs.name[length] == '\0')
				break;

			else
				length++;
		}

		name = new char[length+1];

		for (int i = 0; i < length; i++)
		{
			name[i] =  rhs.name[i];
		}

		name[length] = '\0';
	}

	else
		name = nullptr;

	return *this;
}

Employee::Employee()
{
	age = 0;
	salary = 0;
	name = nullptr;
}

Employee::Employee(char* n, int a, double s)
{
	age = a;
	salary = s;

	int length = 0;

	while (1)
	{
		if (n[length] == '\0')
			break;

		else
			length++;
	}

	name = new char[length+1];

	for (int i = 0; i < length; i++)
	{
		name[i] =  n[i];
	}

	name[length] = '\0';
}

Employee::~Employee()	//required to avoid memory leakage
{
	if (name!=nullptr)
	{
		delete[] name;	
		name = nullptr; //very important

	}	
}


