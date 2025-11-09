/******************************************************************************
Write a Program that takes input your salary and output the per month profit,
if no amount is drawn from your account for 6 months

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    float salary;
    
    cout << "Input Monthly Salary : ";
    cin>> salary;
    
    float profit;
    profit = salary * (0.10 * 0.5);
    
    cout<<"if you keep this amount in account for 6 months, your profit at 10% will be: "<<profit<<endl;

    return 0;
}

/*
Formula: "Interest = p x r x t" where 
p = Principle Amount, 
r = Annual Interst Rate, 
t = Months expressed in years 6/12 = 0.5
*/