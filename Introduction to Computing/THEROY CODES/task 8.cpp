/******************************************************************************
Searching in Array (BUG)
*******************************************************************************/
// <bits/std c++.h>
#include <iostream>
using namespace std;

#define min 30
#define size 10


int main()
{
    int i=0, x, count=0, inp, arr[size]={23,45,55};
    
    while (i<size)
    {
        x = rand() % 100;
        cout << arr[i] << "\t";
        i++;
        
        cout <<"Enter Number between 0 to 100 : ";
        cin >> inp;
        
        for (int i = 0; i < size; i++) {
            cout << "\n" << arr[i] << " is item no. "<< i+1;
            count ++;
        }
        
        if (count = 0)
        {
            cout <<"\n Entered no. NOT FOUND !\n";
        }
    }
    
    return 0;
}
