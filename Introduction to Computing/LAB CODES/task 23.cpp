// Linear Search

#include <iostream>
using namespace std;

int main()
{
    int inp, arr[5] = {1,2,3,4,5};
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i]<<" ";
    }
    cout<<"\nEnter Number to Find: "; cin>>inp;
    
    for (int i = 0; i < 5; i++) {
        if(arr[i]==inp)
        cout<<"Item: "<<i+1<<" at index "<<i<<endl;
    }
    return 0;
}
