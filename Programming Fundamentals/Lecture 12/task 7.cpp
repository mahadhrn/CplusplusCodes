/*
Write a function to copy an array of size size1 named arr1 into array of size size2=size1-1 
named arr2, by skipping the last element of arr1.

Use this function prototype:
    void copy(int *arr1 ,int size1,int*arr2,int size2);

Use this function call:
If source is an integer pointer pointing an array of size1 and destination is an integer pointer pointing an array of 
size2 all initialized by user in main. 
copy (source , size1,destination,size2 );
*/

#include <iostream>
using namespace std;

// Function to copy array arr1 into arr2, skipping the last element of arr1
void copy(int *arr1, int size1, int *arr2, int size2) {
    for (int i = 0; i < size2; ++i) {
        arr2[i] = arr1[i];
    }
}

int main() {
    int size1 = 5; // Example size
    int size2 = size1 - 1;
    
    // Dynamically allocate arrays
    int *source = new int[size1] {1, 2, 3, 4, 5};
    int *destination = new int[size2];
    
    // Copy the array
    copy(source, size1, destination, size2);
    
    // Display the destination array
    cout << "Destination array: ";
    for (int i = 0; i < size2; ++i) {
        cout << destination[i] << " ";
    }
    cout << endl;
    
    // Clean up
    delete[] source;
    delete[] destination;
    
    return 0;
}
