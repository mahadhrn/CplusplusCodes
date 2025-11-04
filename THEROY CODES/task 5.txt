/******************************************************************************
SWITCH Statement:
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter A or B : ";
    char a;
    cin >> a;
    
    switch (a)
    {
        case 'A':
        cout << "You entered A\n";
        break;
    
        case 'B':
        cout << "You entered B\n";
        break;    
        
        default:
        cout << " You Entered Non-Desired Character\n";
        
    }
    return 0;
}

/*
SYNTAX:
--------------------------------
switch (expression)
{
    case value1:
    statement1:
    break;
    
    case value2:
    statement2:
    break;
    
    ...
    
    default:
    statement n;
    
}
--------------------------------
*/
