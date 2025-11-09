// Insert Number in Array

#include <iostream>
using namespace std;

int main()
{
    int i, arr[6], elem;
    cout<<"Enter 5 Array Elements: ";
    for (i = 0; i < 5; i++) 
        cin>>arr[i];
        
    cout<<"Insert Element: ";
    cin>>elem;
    
    arr[i] = elem;
    cout<<"\n---- Updated Array: ---- \n";
    
    for (i = 0; i < 6; i++) 
        cout<<arr[i]<<" ";
    
    cout<<endl;
    return 0;
}
