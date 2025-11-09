#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	ComplexNumber obj1;
	ComplexNumber obj2;
	ComplexNumber obj3;
	ComplexNumber obj4;
	ComplexNumber obj5;
	double realpart[5], imaginarypart[5];
	cout << "Enter the Values \n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Real Part of Complex Number " << i+1 << " : ";
		cin >> realpart[i];
		cout << "Enter Imaginary Part of Complex Number " << i+1 << " : ";
		cin >> imaginarypart[i];
	}
	obj1.set(realpart[0], imaginarypart[0]);
	obj2.set(realpart[1], imaginarypart[1]);
	obj3.set(realpart[2], imaginarypart[2]);
	obj4.set(realpart[3], imaginarypart[3]);
	obj5.set(realpart[4], imaginarypart[4]);
	cout << "\nFollowing are the complex numbers\n";
	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
	obj5.display();
	system("pause");
	return 0;
}