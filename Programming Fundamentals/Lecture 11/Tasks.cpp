#include <iostream>
using namespace std;

// TASK1: Initialize Static Array
void initialize_array(int *arr, int size) {
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// TASK2: Initialize Dynamic Array
int* create_initialize_array(int &size) {
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    return arr;
}

// TASK4: Search Value in Dynamic Array
int search_array(int *arr, int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}
1

// TASK5: Shift Array Left by One
void shift_left(int *arr, int size) {
    if (size <= 0) return;
    for (int i = 0; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = 0;
}

// TASK6: Shift Left Until One Element Left
void shiftLeftOnce(int *arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
}

void shift_left_until_one(int *arr, int size) {
    while (size > 1) {
        shiftLeftOnce(arr, size);
        --size;
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

// TASK7: Shift Left From Index
void shift_left_index(int *arr, int size, int index) {
    if (index >= size || size <= 0) return;
    for (int i = index; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = 0;
}

int main() {
    int choice;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Initialize Static Array\n";
        cout << "2. Initialize Dynamic Array\n";
        cout << "3. Search Value in Dynamic Array\n";
        cout << "4. Shift Array Left by One\n";
        cout << "5. Shift Array Left Until One Element Left\n";
        cout << "6. Shift Left From Selected Index\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int arr[5];
                initialize_array(arr, 5);
                break;
            }
            case 2: {
                int size;
                int *arr = create_initialize_array(size);
                cout << "Array elements are: ";
                for (int i = 0; i < size; ++i) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                delete[] arr;
                break;
            }
            case 3: {
                int size;
                cout << "Enter the size of the array: ";
                cin >> size;
                int *arr = new int[size];
                cout << "Enter " << size << " integers:" << endl;
                for (int i = 0; i < size; ++i) {
                    cin >> arr[i];
                }
                int value;
                cout << "Enter the value to search for: ";
                cin >> value;
                int index = search_array(arr, size, value);
                if (index != -1) {
                    cout << "Value found at index " << index << endl;
                } else {
                    cout << "Value not found" << endl;
                }
                delete[] arr;
                break;
            }
            case 4: {
                int size;
                cout << "Enter the size of the array: ";
                cin >> size;
                int *arr = new int[size];
                cout << "Enter " << size << " integers:" << endl;
                for (int i = 0; i < size; ++i) {
                    cin >> arr[i];
                }
                shift_left(arr, size);
                cout << "Array after shifting left: ";
                for (int i = 0; i < size; ++i) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                delete[] arr;
                break;
            }
            case 5: {
                int size;
                cout << "Enter the size of the array: ";
                cin >> size;
                int *arr = new int[size];
                cout << "Enter " << size << " integers:\n";
                for (int i = 0; i < size; ++i) {
                    cin >> arr[i];
                }
                cout << "\nShifting array left until one element remains:\n";
                shift_left_until_one(arr, size);
                cout << "\nFinal remaining element: " << arr[0] << endl;
                delete[] arr;
                break;
            }
            case 6: {
                int size, index;
                cout << "Enter the size of the array: ";
                cin >> size;
                int *arr = new int[size];
                cout << "Enter " << size << " integers:" << endl;
                for (int i = 0; i < size; ++i) {
                    cin >> arr[i];
                }
                cout << "Enter the index to start shifting from: ";
                cin >> index;
                shift_left_index(arr, size, index);
                cout << "Array after shifting left from index " << index << ": ";
                for (int i = 0; i < size; ++i) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                delete[] arr;
                break;
            }
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
