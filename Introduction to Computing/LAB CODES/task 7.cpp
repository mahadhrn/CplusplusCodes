// Countdown till 1 (from InputNumber)

#include <iostream>
using namespace std;
int main() {

	int num;
	cout << "Enter Number: ";	cin >> num;

	while (num >= 1) {
		cout << num-- << endl;
	}
	system("pause");
	return 0;
}