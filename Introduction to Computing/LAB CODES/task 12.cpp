/* --- Prime / Not-Prime
An even number is prime if it is 2.
An odd integer is prime if it is not divisible by 
(any odd integer less than or equal to the square root)
*/

#include <iostream>  
using namespace std;  
int main()  
{  
	int num,d,check=1;

	cout << "Enter Any +ve Integer: "; cin >> num;
	if (num == 0 || num == 1)
		check = 0;
	else 
	    {
		for (d = 2; d < num ; d++)
			if(num % d == 0)
				check = 0;
	}

	if (check == 1)
		cout << "Prime Number." << endl;

	else
		cout << "Non-Prime Number" << endl;

  return 0;  
}  