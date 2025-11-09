#include <iostream>
using namespace std;

class Bank
{
	int bankCode;
	double interestRate;
	char *name;
public:
	void setBankCode(int a);
	void setName(char* n);

	void display() const;
	char* getName() const;
	void increaseInterestRateBy(double val);

	Bank (const Bank& rhs);
	Bank& operator = (const Bank& rhs);
	Bank();
	Bank(char* n, int a, double s);
	~Bank();
};