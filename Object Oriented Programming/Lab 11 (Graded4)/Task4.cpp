#include<iostream>
using namespace std;

// BankAccount
class bankaccount
{
protected:
	char  title[50];
	double accountnumber;
	double balance;
public:
	bankaccount()
	{
		title[50] = { 0 };
		accountnumber = 0;
		balance = 0;
	}
	void setba(char t[50], double an, double b)
	{
		title[50] = t[50];
		accountnumber = an;
		balance = b;
	}
	void info()
	{
		cout << "Enter Bank Name : ";       cin.getline(title, 50);
		cout << "Enter Account Number : ";  cin >> accountnumber;
		cout << "Enter Balance : ";         cin >> balance;
		cout << endl;
		cout << "___________________________"<<endl;
		cout << "Bank Name : " << title << endl;
		cout << "Account Number : " << accountnumber << endl;
		cout << "Balance : " << balance << endl;
	}
	void deposit()
	{
		double d;
		cout << "Enter The Amount You Want to deposit : "; cin >> d;
		balance += d;
		cout << "Total Balance in the account is : " << balance << endl;
	}
	void withdraw()
	{
		double w;
		cout << "Enter the Amount you want to withdraw : "; cin >> w;
		balance = balance - w;
		cout << "Total Balance in the account is : " << balance << endl;
	}
};

// SavingAccount
class savingaccount :public bankaccount
{
protected:
	double interestrate;
public:
	void setrate(double ir)
	{
		interestrate = ir;
	}
	void calculateinterestrate()
	{
		cout << "Interest Rate is : " << balance*0.10 << endl;
	}
};

// CheckingAccount
class checkingaccount :public savingaccount
{
protected:
	double feecharge;
public:
	void setfee(double fc)
	{
		feecharge = fc;
	}
	void feecharged()
	{
		double fee;
		fee = balance / 100;
		feecharge = fee*5;
		cout << "Total fee charged is : " << feecharge << endl;
	}
	void checkingbalance()
	{
		int op;
		//cout <<"___________________";
		cout << "\n[Enter Your choice] \n";
		cout << "1. Deposit\n2. Withdraw\n";
		cout << "\nSelect : ";  cin >> op;
		if (op == 1)
		{
			deposit();
			feecharged();
		}
		else if (op == 2)
		{
			withdraw();
			feecharged();
		}
	}
};

// Driver Code
int main()
{
	checkingaccount obj2;
	obj2.info();
	obj2.checkingbalance();
	obj2.setrate(10);
	obj2.calculateinterestrate();

	return 0;
}