/*
*       * * * * *
*       *
*       *
*       *
* * * * * * * * * 
        *       *
        *       *
        *       *
* * * * *       *
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "*       * * * * *\n";
	string x = "*       *";
	string z = "        *       *";
	int y=1;
	while (y<4)
	{
		cout << x << endl;
		y++;
		if (y == 4)
			cout << "* * * * * * * * * \n";
		while (y>3&&y<7)
		{
			cout << z << endl;
			y++;
		}
	}
	cout << "* * * * *       *\n";
	return 0;
}

