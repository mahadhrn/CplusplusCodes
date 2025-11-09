/******************************************************************************
Second Max (Integer)
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cout << "Enter First Integer: ";	cin >> a;
    cout << "Enter Second Integer: "; cin >> b;
    cout << "Enter Third Integer: "; cin >> c;

	if (a >= b && a <= c || a <= b && a >= c){
		cout << "\n   ----> Integer (a) is 2nd Maximum Number = " << a << endl;
	}
	else if (b >= a && b <= c || b <= a && b >= c){
		cout << "\n   ----> Integer (b) is 2nd Maximum Number = " << b << endl;
	}
	else
		cout << "\n   ----> Integer (c) is 2nd Maximum Number = " << c << endl<<endl<<endl;

	return 0;
}