#include "Bank.h"

void Bank::setBankCode(int a)
{
	bankCode = a;
}

void Bank::setName(char* n)
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

void Bank::display() const
{
	if (name == nullptr)
		cout << "Name = nullptr" << endl;
	else
		cout << "Name = " << name << endl;

	cout << "Bank Code = " << bankCode << endl;
	cout << "Interest Rate = " << interestRate << endl;
}

char* Bank::getName() const
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

void Bank::increaseInterestRateBy(double val)
{
	interestRate = interestRate + val;
}

Bank::Bank (const Bank& rhs)
{
	bankCode = rhs.bankCode;
	interestRate = rhs.interestRate;

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

Bank& Bank::operator = (const Bank& rhs)
{
	//same as copy constructor, this, however returns *this;
	bankCode = rhs.bankCode;
	interestRate = rhs.interestRate;

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

Bank::Bank()
{
	bankCode = 0;
	interestRate = 0;
	name = nullptr;
}

Bank::Bank(char* n, int a, double s)
{
	bankCode = a;
	interestRate = s;

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

Bank::~Bank()	//required to avoid memory leakage
{
	if (name!=nullptr)
	{
		delete[] name;	
		name = nullptr; //very important

	}	
}


