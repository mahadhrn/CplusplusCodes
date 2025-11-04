// String Copying

#include<iostream>
using namespace std;
int main()
{
	char str1[100], str2[100];
	int i;
	
	cout << "Enter String: ";
	cin.getline(str1, 100);

	for (i = 0; str1[i] != '\0'; i++)
		str2[i] = str1[i];
	
	str2[i] = '\0';
	cout << "\nString 1: "<< str1<<endl;
	cout << "String 2: " << str2 <<" (Copied)"<<endl<<endl;

	system("pause");
	return 0;
}