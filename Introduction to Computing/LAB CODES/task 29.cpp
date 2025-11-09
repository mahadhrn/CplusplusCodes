// Replace (Number)Item in Array.

#include <iostream>
using namespace std;

int main()
{
    int input, size = 5, arrOriginalSize=5;
    int arr[size] = {1,2,3,4,5};
    
    cout<<"Original Array: "<<endl;
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    int select;
    cout<<"\n\nSelect Item: "; cin>>select;
    
    for (int i = 0; i < size; i++) {
        if(arr[i] == select){
            cout<<"Replace by: "; cin>>input;
            arr[i] = input;
        }
    }
    
    //Updated Array:
    cout<<"\n____________\nUpdated Array: "<<endl;
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
