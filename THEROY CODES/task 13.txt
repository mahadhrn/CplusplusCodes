/******************************************************************************
EvenOdd Count + Deletion
*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    srand (time(0));
    int x,odd=0,even=0,total=25,count=0;
    int arr[25] = {1,2,3,4};;
    
    for (int i = 0; i < 25; i++) {
       x=rand() %51;
       if(x>10)
       {
           arr[i]=x;
       }
        
            if(arr[i] % 2 == 0){
                even++;
            }
            else if(arr[i]%2 != 0){
                odd++;
            }
            else
            continue;
    }
    
    //Display array
    cout<<"\n\n\t\t[ Array Items: ]"<<endl;
    for (int i = 0; i < total; i++) {
        cout << arr[i] <<", ";
    }
    
    
    
    cout<<"\n\nEven Numbers:  "<<even<<endl;
    cout<<"Odd Numbers:  "<<odd<<endl;
    
    int inp;
    cout<<"\nEnter Number to Delete:  ";
    cin>>inp;
    
    for (int i = 0; i < total; i++) {
        if (arr[i] == inp){
            for(int j=i; j<(total-1); j++){
                arr[j] = arr[j+1];
            }
            total--;
            count++;
        }
    }

    if (count == 0){
        cout <<"\nNumber not found in array!";
    }
    cout<<"\n\n\t\t[ Updated List ]"<<endl;
    
    for (int i = 0; i < total; i++) {
        cout<< arr[i]<< ", ";
    }

    
    return 0;
}
