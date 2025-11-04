/******************************************************************************
Number greater than 9999 and less than 100000. Sum of Digits
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Number greater than 9999 and less than 100000 : ";
    cin>> num;
    
    if (num > 9999 and num < 100000){
        int a1;
        int a2;
        int a3;
        int a4;
        int a5;
        int a6;
        int sum = 0;
        
        a1 = num % 10;
        sum = sum + a1;
        num = num/10;
        
        a2 = num % 10;
        sum = sum + a2;
        num = num/10;
        
        a3 = num % 10;
        sum = sum + a3;
        num = num/10;
        
        a4 = num % 10;
        sum = sum + a4;
        num = num/10;
        
        a5 = num % 10;
        sum = sum + a5;
        num = num/10;
        
        a6 = num % 10;
        sum = sum + a6;
        num = num/10;
     
        cout << "Sum of Digits are : "<<sum<<endl;
    }
    else{
        cout <<"Invalid Number!"<<endl;
    }    
 
    return 0;
}