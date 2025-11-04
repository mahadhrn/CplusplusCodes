/******************************************************************************
Multiple IFs Statements
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    
    if (num >=5 && num <=10)
    cout<<"Correct.";
    
    if (num == 8)
    cout<<"Very Good.";
    
    if (num < 5)
    cout<<"Bad";
    
    return 0;
}
