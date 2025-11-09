/******************************************************************************
Binary Search 
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int inp, arr[] = {23, 32, 44, 49, 55};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Enter Element to Search: ";
    cin >> inp;

    int first = 0, last = size - 1, mid;

    while (first <= last) {
        mid = (first + last) / 2; // Calculate mid at the beginning of the loop

        if (arr[mid] < inp) {
            first = mid + 1;    
        }
        else if (arr[mid] == inp) {
            cout << "Item found at position " << mid + 1 << endl;
            return 0; // Exit the program after finding the item
        }
        else {
            last = mid - 1;
        }
    }

    // If the element is not found
    cout << "Not Found!" << endl;

    return 0;
}