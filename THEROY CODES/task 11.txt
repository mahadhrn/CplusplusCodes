/******************************************************************************
Deletion (Array-Element)
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
   
    int item,total=5, arr[5] = {23,34,33,44,55};
    //Show Array
    cout<<"Array Items : ";
    for (int i = 0; i < total; i++) {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    
    //Deletion Process
    cout<<"Delete: "; cin>>item;
    for (int i = 0; i < total; i++) {
        if(arr[i]==item){
            for(int j=i; j<(total-1); j++){
                arr[j] = arr[j+1];
            }
            total --;
        }
    }
    // Result Array
    cout<<endl<<"Successfully Deleted! \nArray Items: ";
    for (int i = 0; i < total; i++) {
        cout<<arr[i]<<", ";
    }

    return 0;
}