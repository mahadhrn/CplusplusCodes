/******************************************************************************
Bubble SORT
*******************************************************************************/

#include <iostream>
#include <ctime> // Use <ctime> instead of <time.h>
using namespace std;

#define SIZE 5

int main() {
    int i, j, temp;
    int arr[SIZE]; // Initialize the array without predefined values
    srand(time(0));

    // Fill the array with random numbers
    for (i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100; // Generate random numbers between 0 and 99
    }

    // Display the original array
    cout << "Original Array: \n";
    for (i = 0; i < SIZE; ++i) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // Bubble Sort Algorithm
    for (i = 0; i < SIZE - 1; i++) { // Loop through the array
        for (j = 0; j < SIZE - 1 - i; j++) { // Last i elements are already sorted
            if (arr[j] > arr[j + 1]) {
                // SWAPPING
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    cout << "After Bubble Sort: \n";
    for (i = 0; i < SIZE; ++i) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}