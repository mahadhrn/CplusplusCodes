/*---- SHRINK ARRAY AND UPDATE POINTER.----

Write a function to copy an array of size size1 named arr1 into array of size size2=size1-1 named arr2,
by skipping the last element.

Write another function that will delete the arr1 once copied into arr2 and assign/update arr1 the 
same address pointed to by arr2. Also update the size1 to size2.
(Note: This concept is known as shrinking/reducing size of dynamically allocated arrays)

Use these function prototype:
    void copy(int *arr1 ,int size1,int* arr2,int size2);
    void shrink(int *&arr1,int &size1);

Make call of copy function inside shrink instead of main.

Create arr2 pointer inside shrink instead of main.
Use this function call:
If source is an integer pointer pointing an array of size1 all initialized by user in main. 
shrink (source, size1);
*/
#include <iostream>
using namespace std;

// Function to copy array arr1 into arr2, skipping the last element of arr1
void copy(int *arr1, int size1, int *arr2, int size2) {
    for (int i = 0; i < size2; ++i) {
        arr2[i] = arr1[i];
    }
}

// Function to shrink array arr1 by one element
void shrink(int *&arr1, int &size1) {
    int size2 = size1 - 1;
    int *arr2 = new int[size2];
    
    // Copy arr1 to arr2
    copy(arr1, size1, arr2, size2);
    
    // Delete the old array
    delete[] arr1;
    
    // Update arr1 to point to the new array
    arr1 = arr2;
    size1 = size2;
}

int main() {
    int size1 = 5; // Example size
    int *source = new int[size1] {1, 2, 3, 4, 5};
    
    // Shrink the array
    shrink(source, size1);
    
    // Display the shrunk array
    cout << "Shrunk array: ";
    for (int i = 0; i < size1; ++i) {
        cout << source[i] << " ";
    }
    cout << endl;
    
    // Clean up
    delete[] source;
    
    return 0;
}
