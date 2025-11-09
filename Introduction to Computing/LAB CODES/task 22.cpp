// SORTING

#include <iostream>
using namespace std;

int main()
{
    int num, SIZE=5;
    int arr[SIZE] = {4,1,5,3,2};
    
    // SORTING
    for (int i=0 ; i<SIZE; i++) {
        for (int j=i+1 ; j<SIZE; j++) {
            if (arr[j]<arr[i]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp; }
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}
