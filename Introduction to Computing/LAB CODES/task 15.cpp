// Find Substring in a String.

#include<iostream>
using namespace std;
#define SIZE 50

int main()
{
	char str[SIZE], sbstr[SIZE / 2];
	
	cout << "Enter a line to save: ";
	cin.getline(str, SIZE);
	cout << "Enter a sub-string to search in line: ";
	cin.getline(sbstr, SIZE / 2);

	int count = sizeof(sbstr), a = 0, sbstrLen=0,startindex=-1;

	for (int i = 0; sbstr[i] != '\0'; i++)
		sbstrLen++;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (sbstr[0] == str[i])
		{
			startindex++;
			a++;
			for (int j = 1; sbstr[j] != '\0'; j++)
			{
				if (sbstr[j] == str[j + i])
				{
					a++;

				}
			}

		}
	}
	if (a== sbstrLen)
		cout << "\n"<<sbstr << " found from index "<<startindex<< " to index "<<startindex+sbstrLen;

	return 0;
}
