// Table Generator
#include <iostream>
using namespace std;
int main()
{
	int n, i = 1;
	cout << " Print table of any number from 2 to 20 " << endl;
	cout << " ______________________________________ \n" << endl;
	cout << " Enter a Number: ";
	cin >> n;

	if ((n > 1 && n <= 20))
	{
	    while(i<=10){
    		cout << endl;
    		cout << n << " x " << i << " = " << n*i;
    		i++;
	    }
	}
	else{
		cout << "Invalid Number, Enter Number from (2 to 20)";
		return 0;
	}

}