// (20% Discount) on above 1000$ AND Buy more than 20 Products
// (10% Discount) on above 1000$ OR  Buy more than 20 Products
#include <iostream>  
using namespace std;
int main()
{
	int qty, price, totalprice;
	cout << "Enter the Quantity of Product :"; cin >> qty;
	cout << "Enter the Price of Product :"; cin >> price;

	if (qty >= 20 && price >= 1000) {
		totalprice = qty * price;
		cout << "\n(20% Discount) Total = " << totalprice * 0.2 << endl;
		cout << endl;
	}
	else if (qty >= 20 || price >= 1000) {
		totalprice = qty * price;
		cout << "\n(10% Discount) Total = " << totalprice * 0.1 << endl;
		cout << endl;
	}
	else {
		totalprice = qty * price;
		cout << "\n(0% Discount) Total Price = " << totalprice << endl;
		cout << endl;
	}
	return 0;
}