// Input Continue, until Odd Number is Entered!

#include<iostream>
using namespace std;
int main()
{
    int input = 0;
    bool check = false;
    
    while(check != true)   {
        cout<<"\n\nEnter a number: "; cin>> input;
        
        if(input % 2 == 0){
            cout<<"Even Number";
            continue;
        }
        if(input % 2 != 0){
            cout<<"Odd Number";
            break;
        }
    }
    return 0;
}