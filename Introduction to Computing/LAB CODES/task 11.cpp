// Array SUM,Avg

#include <iostream>
using namespace std;

int main()
{
// Display 'Array Initialized with 10 Values.'
        int count=0;
        int arr[10] = {12,24,36,48,52,65,85,14,32,26};
        
        cout <<"Array : ";
        for(int i = 0; i < 10; i++)
            cout<< arr[i]<<" ";
        
        cout<<endl<<endl;
    
// Sum of Numbers
            int sum = 0;
            
            for(int i = 0; i < 10; i++){
                if(arr[i] % 2 == 0)
                {
                    sum = sum + arr[i];
                    count++;
                }
            }
            cout<<"Sum of Numbers: "<<sum<<endl;


// Average of Numbers 
            float avg=0;
            
            for(int i = 0; i < 10; i++){
                if(arr[i] % 2 == 0)
                {
                    avg = (float)sum/count;     
                }
            }
            cout<<"Average of Numbers: "<<avg<<endl;
    
    
    return 0;
}

