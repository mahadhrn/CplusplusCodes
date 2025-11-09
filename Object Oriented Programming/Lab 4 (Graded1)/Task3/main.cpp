// TASK: 3

#include <iostream>
#include <string>
using namespace std;
class bank
{

public:

	string name;
	int acc;
	string type;
	float bal;


	void set(){


		cout << "ENTRE  the Name of Bank Account Holdrer" << endl;
		cin >> name;
		cout << endl;
		cout << "ENTRE  the  Bank Account Number" << endl;
		cin >> acc;
		cout << endl;
		cout << "ENTRE  the Type  Bank Account " << endl;
		cin >> type;
		cout << endl;
		cout << "ENTRE  the  Bank Balance" << endl;
		cin >> bal;
		cout << endl;

	}

	void get(){
	    
		int n;

        cout << "-----------------------------------"<<endl;
		cout << "Bank Holder Name : " << name;
		cout << "\nThe Account number : " << acc;
		cout << "\nBank Type : " << type;
		cout << "\nBank balance : " << bal<<endl;
		cout << "-----------------------------------"<<endl;

		cout << "\n1)Deposit to account";
		cout << "\n2)Withdrawn from account" << endl;
		cout<<"--> Select : ";
		cin >> n;
		cout << endl;
		
		int b;
		if (n == 1)
		    cout << "Add Amount : "; cin >> b;
			cout << "New Balance :" << bal + b<< endl;
		if (n == 2)
		    cout << "Withdraw Amount : "; cin >> b;
        	cout << "Remaining Balance : " << bal - b << endl;
	}

};


int main(){

	bank myobjt;
	myobjt.set();
	myobjt.get();

    return 0;
}