// Most Occuring Number
#include <iostream>
using namespace std;

int main()
{
    int x, arr[5] = {1,2,1,3,4};
    cout<< "Most Occuring Item: ";
    
    for (int i = 0; i < 5; i++) {
        for(int j=1; j<5; j++){
            if(arr[i] == arr[i+j])
            x = arr[i];
        }
    }
    
    cout <<x<<endl;
    return 0;
}