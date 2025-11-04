// Generate Rand() Characters, Store in Char Array (Find SecondMinimum Character)

#include<iostream>
#include<time.h>
#define SIZE 15
using namespace std;
int main()
{
	char arr1[SIZE], fmin, smin;
	int  i = 0;
	srand(time(0));
	
	cout << "Random Generated Characters: \n";
	
	while (i < SIZE){
		arr1[i] = rand();
		if (arr1[i] >= 65 && arr1[i] <= 90)
		{
			cout << arr1[i]<< ", ";
			i++;
		}
		else
			continue;

	}
	fmin = smin = 'Z';
	cout << "\nSecond Minimum: ";
	for (i = 0; i < SIZE;i++)
	{
		if (arr1[i] < fmin)
		{
			smin = fmin;
			fmin = arr1[i];
		}
		else 
		if (arr1[i] < smin && arr1[i] != fmin)
			smin = arr1[i];
	}
	cout << smin<<endl<<endl;
	system("pause");
	return 0;
}
