// Putting 0s and 1s first in an Array.

#include <iostream>
using namespace std;

int main()
{
    int temp, arr[10] = {1,2,1,0,5,6,7,1,9,10};
    
    for (int i = 0; i < 10; i++) {
        for(int j=0; j<10; j++){
            if(arr[i] == 0 || arr[i] == 1){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) 
        cout<<arr[i]<<" ";
    
    return 0;
}
